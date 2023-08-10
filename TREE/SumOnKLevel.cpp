#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* right;
    struct Node* left;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void KthLevelSum(Node* root){
    queue<Node*> q;
    if(root == NULL)
        return;
    q.push(root);
    q.push(NULL);
    int k = 1;
    int count = 0, level = 3;
    while(!q.empty()){
        Node* node = q.front();
        q.pop();
        if(node!=NULL){
            count += node->data;
            if(node->left != NULL)
                q.push(node->left);
            if(node->right != NULL)
                q.push(node->right);
        }
        else if(k<=level){
            q.push(NULL);
            cout<<"The sum on level "<<k<<" : "<<count<<endl;
            k++;
            count = 0;
        }
    }
}


int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    KthLevelSum(root);
    return 0;
}