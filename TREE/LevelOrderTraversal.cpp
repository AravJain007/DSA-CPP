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

void printLevelOrder(Node* root){
    if(root == NULL)
        return;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* n = q.front();
        q.pop();
        if(n != NULL){
            cout<<n->data<<" ";
            if(n->left != NULL)
                q.push(n->left);
            if(n->right != NULL)
                q.push(n->right);
        }
        else if(!q.empty())
            q.push(NULL);
    }
}

int32_t main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    printLevelOrder(root);
    cout<<endl;
    return 0;
}