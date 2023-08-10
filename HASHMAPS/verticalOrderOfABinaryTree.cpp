#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

struct Node
{
    int data;
    Node *left, *right;
    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

void verticalOrder(Node *root, int hdis, map<int, vi> &m)
{
    if (root == NULL)
        return;
    m[hdis].push_back(root->data);
    verticalOrder(root->left, hdis - 1, m);
    verticalOrder(root->right, hdis + 1, m);
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(7);
    root->right = new Node(4);
    root->left->left = new Node(3);
    root->left->right = new Node(11);
    root->right->left = new Node(14);
    root->right->right = new Node(6);

    map<int, vi> m;
    verticalOrder(root, 0, m);
    map<int, vi>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        for (int i = 0; i < (it->ss).size(); i++)
        {
            cout << (it->ss)[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}