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

//  THERE IS SOME HUGE ERROR IN THE PROGRAM JUST FUCKING FIX IT ARAV !!!

int UtilityFuncPathSum(Node *root, int &ans)
{
    if (root == NULL)
        return 0;
    
    int left = UtilityFuncPathSum(root->left, ans);
    int right = UtilityFuncPathSum(root->right, ans);
    
    int nodeMax = max(max((root->data), (root->data + right + left)), max((root->data + left), (root->data + right)));
    ans = max(ans,nodeMax);
    
    int singlePathSum = max(root->data, max((root->data + left), (root->data, right)));
    
    return singlePathSum;
}

int maxPathSum(Node *root)
{
    int ans = INT_MIN;
    UtilityFuncPathSum(root, ans);
    return ans;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3); //
    root->left->left = new Node(4);
    root->right->right = new Node(5);
    cout << maxPathSum(root) << "\n";
    return 0;
}