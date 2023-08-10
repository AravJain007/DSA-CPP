#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *right, *left;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node *SortedArrayToBST(int arr[], int start, int end){
    if(start > end)
        return NULL;
    int mid = (start + end)/2;
    Node *root = new Node(arr[mid]);
    root->left = SortedArrayToBST(arr,start,mid-1);
    root->right = SortedArrayToBST(arr,mid+1,end);
    return root;
}

void preorder(Node *root){
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
    int arr[5] = {10,20,30,40,50};
    Node *root = SortedArrayToBST(arr,0,4);
    preorder(root);
    cout<<"\n";
    return 0;
}