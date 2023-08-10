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

int calcHeight(Node* root){
    if(root == NULL)
        return 0;
    return (max(calcHeight(root->left),calcHeight(root->right))+1);
}

int calcDiameter(Node* root){   // Time complexity is O(N^2) which is bad
    if(root == NULL)
        return 0;
    int lHeight = calcHeight(root->left);  // Time Complexity of calcHeight itself is O(N) and this is done N times.
    int rHeight = calcHeight(root->right); // Therefore the total time complexity becomes O(N^2).
    int currDiameter = lHeight + rHeight + 1;
    int lDiameter = calcDiameter(root->left);
    int rDiameter = calcDiameter(root->right);
    return max(currDiameter,max(lDiameter,rDiameter));
}

int calcDiameterOptimised(Node* root,int* height){ // This function will have a time complexity of O(N)
    if (root == NULL){
        *height = 0;
        return 0;
    }
    int lh = 0, rh = 0;
    int lDiameter = calcDiameterOptimised(root->left,&lh);
    int rDiameter = calcDiameterOptimised(root->right,&rh);

    int currDiameter = lh + rh +1;
    *height = max(lh,rh) + 1;

    return max(currDiameter, max(lDiameter,rDiameter));
}

/*        1
        /   \
       /     \
      2       3
     / \     / \
    4   5   6   7
     \       \   \
      10      9   8
*/
int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->right->right = new Node(8);
    root->right->left->right = new Node(9);
    root->left->left->right = new Node(10);
    cout<<calcDiameter(root)<<endl;
    int height = 0;
    cout<<calcDiameterOptimised(root, &height)<<endl;
    return 0;
}