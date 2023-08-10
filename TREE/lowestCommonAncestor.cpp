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
        left = NULL;
        right = NULL;
    }
};

Node *LowestCommonAncestor(Node *root, int n1, int n2)
{
    if (root == NULL)
        return NULL;
    if (root->data == n1 || root->data == n2)
        return root;

    Node *left = LowestCommonAncestor(root->left, n1, n2);   // Checking Lowest Common Ancestor in the left subtree.
    Node *right = LowestCommonAncestor(root->right, n1, n2); // Checking Lowest Common Ancestor in the right subtree.

    if (left == NULL && right == NULL) // If both left subtree and right subtree dont have n1 or n2 then we will get both left and right
        return NULL;                   // as NULL. So therefore we return NULL.
    if (left != NULL && right != NULL) // If both left and right are not NULL that means that this particular root itself is the Lowest
        return root;                   // Common Ancestor of both n1 and n2 and hence we return the root itself.
    if (left != NULL)                  // If just left is not NULL it means we have found either n1 or n2 in the left subtree so we return left.
        return left;
    return right; // If just right is not NULL it means we have found either n1 or n2 in the right subtree so we return right.
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);
    root->left->left->left = new Node(7);
    root->left->left->right = new Node(8);
    root->left->right->right = new Node(9);
    root->right->right->left = new Node(10);
    root->right->right->right = new Node(11);
    Node *lca = LowestCommonAncestor(root, 9, 7);
    if (lca != NULL)
        cout << "LCA : " << lca->data << endl;
    else
        cout << "No Common Ancestor" << endl;
}