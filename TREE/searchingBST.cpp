#include "bits/stdc++.h"
using namespace std;

struct Node{
    int data;
    Node *right,*left;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

bool searchInBSTAravNonRecursive(Node* root, int key){
    Node *temp = root;
    while(temp != NULL){
        if(key == temp->data){
            cout << temp << " : " << temp->data <<"\n";
            return true;
        }    
        if(key > temp->data){
            temp = temp->right;
            continue;
        }
        else{
            temp = temp->left;
        }
    }
    return false;
}

Node *searchInBSTApnaCollegeRecursive(Node *root, int key){
    if(root == NULL)      // Base Case One
        return NULL;
    if(root->data == key) // Found the key
        return root;
    
    if(root->data > key)  // Searching in left subtree
        return searchInBSTApnaCollegeRecursive(root->left, key);
    return searchInBSTApnaCollegeRecursive(root->right, key);
}

Node* insertBST(Node* root, int val){
    if(root == NULL)
        return new Node(val);
    if(val < root->data)
        root->left = insertBST(root->left, val);
    else
        root->right = insertBST(root->right, val);
    return root;
}

/*  BINARY SEARCH TREE
            3
           / \
          2   7
         /   / \
        1   5   8
           / \
          4   6 
*/

int main(){
    Node* root = NULL;
    root = insertBST(root,3);
    insertBST(root,2);
    insertBST(root,3);
    insertBST(root,7);
    insertBST(root,8);
    insertBST(root,5);
    insertBST(root,6);
    insertBST(root,4);
    cout << searchInBSTAravNonRecursive(root, 5) << "\n";
    Node *key = searchInBSTApnaCollegeRecursive(root, 5);
    cout<< key << " : " << key->data << "\n";
    return 0;
}