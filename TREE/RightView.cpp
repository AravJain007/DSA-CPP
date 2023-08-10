#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data = val;
        right = NULL;
        left = NULL;
    }
};

void RightViewArav(Node* root){
    if(root == NULL)
        return;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    int i=1;
    while(!q.empty()){
        Node* curr = q.front();
        q.pop();
        if(curr!=NULL){
            if(curr->left != NULL)
                q.push(curr->left);
            if(curr->right != NULL)
                q.push(curr->right);
            if(q.front() == NULL)
                cout<<curr->data<<" ";
        }else if(!q.empty()){
            q.push(NULL);
        }
    }
}

void RightViewApnaCollege(Node* root){
    if(root == NULL)
        return;
    queue<Node*> q;
    q.push(root);
    // No pushing NULL here since we are using a lil bit different method
    while(!q.empty()){
        int n = q.size();
        for(int i=0;i<n;i++){
            Node* curr = q.front();
            q.pop();
            if(i == n-1){
                cout<<curr->data<<" ";
            }
            if(curr->left != NULL)
                q.push(curr->left);
            if(curr->right != NULL)
                q.push(curr->right);
        }
    }
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->right->left = new Node(8);
    RightViewArav(root);
    cout<<endl;
    RightViewApnaCollege(root);
    cout<<endl;
    return 0;
}