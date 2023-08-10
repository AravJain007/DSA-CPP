#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

int search(int inorder[], int start, int end, int curr)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == curr)
            return i;
    }
    return -1; // This part will never happen since the position will exist in the array in which we are searching
}

Node *buildTree(int preorder[], int inorder[], int start, int end)
{
    static int idx = 0;

    if (start > end) // This is basically a base case incase our start becomes bigger than end.
    { 
        return NULL;
    }

    int curr = preorder[idx];
    idx++;
    Node *node = new Node(curr);

    if (start == end)
    {
        return node; // Since this node is basically the last one it wont have any left or right child and hence we return this node.
    }

    int pos = search(inorder, start, end, curr);
    node->left = buildTree(preorder, inorder, start, pos - 1);
    node->right = buildTree(preorder, inorder, pos + 1, end);

    return node;
}

void inorderPrint(Node *root)
{
    if (root == NULL)
        return;
    inorderPrint(root->left);
    cout << root->data << " ";
    inorderPrint(root->right);
}

int main()
{
    int preorder[] = {1, 2, 4, 3, 5};
    int inorder[] = {4, 2, 1, 5, 3};
    // Building the tree
    Node *root = buildTree(preorder, inorder, 0, 4);
    inorderPrint(root);
    cout << endl;
    return 0;
}