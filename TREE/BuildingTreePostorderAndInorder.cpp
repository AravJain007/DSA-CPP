#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *right;
    struct Node *left;
    Node(int value)
    {
        data = value;
        right = NULL;
        left = NULL;
    }
};

int search(int inorder[], int start, int end, int curr)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == curr)
            return i;
    }
    return -1;
}

Node *buildTree(int postorder[], int inorder[], int start, int end)
{
    static int idx = 4; // We give 4 here coz it is the value of n-1 over here
    if (start > end)
        return NULL;
    int curr = postorder[idx];
    idx--;
    Node *node = new Node(curr);
    if(start == end)
        return node;
    int pos = search(inorder, start, end, curr);
    node->right = buildTree(postorder, inorder, pos + 1, end);
    node->left = buildTree(postorder, inorder, start, pos - 1);
    return node;
}

void displayInorder(Node *root)
{
    if (root == NULL)
        return;
    displayInorder(root->left);
    cout << root->data << " ";
    displayInorder(root->right);
}

int main()
{
    int postorder[] = {4, 2, 5, 3, 1};
    int inorder[] = {4, 2, 1, 5, 3};
    Node *root = buildTree(postorder, inorder, 0, 4);
    displayInorder(root);
    cout<<endl;
    return 0;
}