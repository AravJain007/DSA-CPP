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

void zigzagTraversal(Node *root){
    if(root == NULL)
        return;
    stack<Node*> curr;
    stack<Node*> next;
    bool leftToRight = true;
    curr.push(root);
    while(!curr.empty()){
        Node *temp = curr.top();
        curr.pop();
        if(temp != NULL){
            cout << temp->data << " ";
            if(leftToRight){
                if(temp->left)
                    next.push(temp->left);
                if(temp->right)
                    next.push(temp->right);
            }
            else{
                if(temp->right)
                    next.push(temp->right);
                if(temp->left)
                    next.push(temp->left);
            }
        }
        if(curr.empty()){
            leftToRight = !leftToRight;
            swap(curr, next);
        }
    }
}

int main(){
    Node *root = new Node(12);
    root->left = new Node(9);
    root->right = new Node(15);
    root->left->left = new Node(5);
    root->left->right = new Node(10);
    zigzagTraversal(root);
    cout << "\n";
    return 0;
}