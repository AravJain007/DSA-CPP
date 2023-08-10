#include <bits/stdc++.h>
using namespace std;

struct Node    // The Tree Nodes
{
    int data;
    Node *right, *left;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

struct Info     // This structure is to hold the information about a particular node
{
    int size;   // Current BST size
    int max;    // Maximum allowed for the Node
    int min;    // Minimum allowed for the Node
    int ans;    // Largest BST size
    bool isBST; // If true it means that the node is a part of the BST
};

Info largestBSTinBT(Node *root)
{
    if (root == NULL)
        return { 0, INT_MIN, INT_MAX, 0, true };
    
    if (root->left == NULL && root->right == NULL)
        return {1, root->data, root->data, 1, true};
    
    // Checking the left and right subtree of the node for the required Info
    Info leftInfo = largestBSTinBT(root->left);
    Info rightInfo = largestBSTinBT(root->right);
    Info curr;
    curr.size = (1 + leftInfo.size + rightInfo.size);
    // Checking for the condition - is it a part of BST or will it break the BST run
    if (leftInfo.isBST && rightInfo.isBST && leftInfo.max < root->data && rightInfo.min > root->data)
    {
        curr.min = min(leftInfo.min, min(rightInfo.min, root->data));
        curr.max = max(rightInfo.max, max(leftInfo.max, root->data));
        curr.ans = curr.size;
        curr.isBST = true;
        return curr;
    }
    curr.ans = max(leftInfo.ans, rightInfo.ans);
    curr.isBST = false;
    return curr;
}

int main()
{
    Node *root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(6);
    root->left->left = new Node(2);
    root->left->right = new Node(4);
    Info largestBSTinfo = largestBSTinBT(root);
    if(largestBSTinfo.isBST)
        cout << "The Largest BST is : " << largestBSTinfo.ans << "\n";
    else 
        cout << "No Largest BST\n";
    return 0;
}