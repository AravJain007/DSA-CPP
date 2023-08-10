#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int value){
        data = value;
        right = NULL;
        left = NULL;
    }
};

bool isBST(Node *root, Node *min, Node *max){
    if(root == NULL)
        return true;
    
    if(max != NULL and root->data >= max->data)
        return false;
    if(min != NULL and root->data <= min->data)
        return false;
    
    bool left = isBST(root->left, min, root);
    bool right = isBST(root->right, root, max);
    return left and right;
}

int main(){
    Node *root = new Node(3);
    root->left = new Node(2);
    root->right = new Node(7);
    root->left->left = new Node(1);
    root->right->left = new Node(4);
    root->right->right = new Node(8);
    if(isBST(root, NULL, NULL))
        cout << "It is Binary Search Tree \n";
    else
        cout << "It isn't Binary Search Tree \n";
    return 0;
}