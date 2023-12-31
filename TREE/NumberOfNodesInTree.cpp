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

int numberOfNodes(Node* root){
    if(root == NULL)
        return 1;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    int count = 0;
    while(!q.empty()){
        Node* node = q.front();
        q.pop();
        if(node != NULL){
            count++;
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
        }
        else if(!q.empty())
            q.push(NULL);
    }
    return count;
}

int NumberOfNodesRecursively(Node* root){
    if (root == NULL)
        return 0;
    return (NumberOfNodesRecursively(root->left) + NumberOfNodesRecursively(root->right) + 1);
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->left->left = new Node(8);
    root->left->left->right = new Node(9);
    root->right->left->left = new Node(10);
    root->right->left->right = new Node(11);
    cout<<numberOfNodes(root)<<endl;
    cout<<NumberOfNodesRecursively(root)<<endl;
    return 0;
}