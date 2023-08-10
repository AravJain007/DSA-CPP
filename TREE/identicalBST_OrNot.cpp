#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *right, *left;
    Node(int val){
        data = val;
        right = NULL;
        left = NULL;
    }
};

bool isIdentical(Node *root1, Node *root2){
    if(root1 == NULL && root2 == NULL)
        return true;
    else if(root1 == NULL || root2 == NULL)
        return false;
    else{
        bool cond1 = root1->data == root2->data;
        bool cond2 = isIdentical(root1->left, root2->left);
        bool cond3 = isIdentical(root1->right, root2->right);
        if(cond1 && cond2 && cond3)
            return true;
        return false;
    }
}

int main(){
    // Tree 1
    Node *root1 = new Node(3);
    root1->left = new Node(2);
    root1->left->left = new Node(1);
    root1->right = new Node(7);
    root1->right->right = new Node(8);
    root1->right->left = new Node(5);
    root1->right->left->left = new Node(4);
    root1->right->left->right = new Node(6);
    // Tree 2 - Difference at (root2->right->right = new Node(9))
    Node *root2 = new Node(3);
    root2->left = new Node(2);
    root2->left->left = new Node(1);
    root2->right = new Node(7);
    root2->right->right = new Node(9);
    root2->right->left = new Node(5);
    root2->right->left->left = new Node(4);
    root2->right->left->right = new Node(6);
    if(isIdentical(root1,root2))
        cout<< "BST's are Identical\n";
    else
        cout << "BST's are not Identical\n";
    return 0;
}