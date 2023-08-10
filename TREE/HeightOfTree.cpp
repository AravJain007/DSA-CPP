#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* right;
    struct Node* left;
    Node(int value){
        data = value;
        right = NULL;
        left = NULL;
    }
};

int calcHeight(Node* root){
    if(root == NULL)
        return 0;
    int lHeight = calcHeight(root->left);
    int rHeight = calcHeight(root->right);
    return (max(lHeight,rHeight)+1);
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout<<calcHeight(root)<<endl;
    return 0;
}