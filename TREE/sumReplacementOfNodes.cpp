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

int sumReplacementArav(Node* root){ // O(N) Time Complexity
    if(root == NULL)
        return 0;
    root->data += sumReplacementArav(root->left)+sumReplacementArav(root->right);
    return root->data;
}

void sumReplacementApnaCollege(Node* root){ // O(N) Time Complexity
    if(root == NULL)
        return;
    sumReplacementApnaCollege(root->left);
    sumReplacementApnaCollege(root->right);
    if(root->left != NULL)
        root->data += root->left->data;
    if(root->right != NULL)
        root->data += root->right->data;
}

void printPreorder(Node* root){
    if(root == NULL)
        return;
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    printPreorder(root);
    cout<<endl;
    int tp = sumReplacementArav(root);
    printPreorder(root);
    cout<<endl;
    sumReplacementApnaCollege(root);
    printPreorder(root);
    cout<<endl;
}