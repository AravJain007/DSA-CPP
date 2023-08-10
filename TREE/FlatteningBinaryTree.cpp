#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int value){
        data = value;
        right = NULL;
        left = NULL;
    }
};

void flattenBinaryTree(Node* root){
    if (root == NULL || (root->left == NULL && root->right == NULL))
        return;
    if(root->left != NULL){
        flattenBinaryTree(root->left);

        Node* temp = root->right;
        root->right = root->left;
        root->left = NULL;
        // To find the tail of root->left which is now root->right
        Node* t = root->right;
        while(t->right != NULL){
            t = t->right;
        }
        t->right = temp;
    }
    flattenBinaryTree(root->right);
}

void printAfterFlattening(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    printAfterFlattening(root->right);
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->left = new Node(4);
    flattenBinaryTree(root);
    printAfterFlattening(root);
    cout<<endl;
    return 0;
}