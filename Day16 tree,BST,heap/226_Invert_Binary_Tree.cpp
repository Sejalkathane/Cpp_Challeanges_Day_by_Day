#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;

    Node(int x)
    {
        key = x;
        left = right = NULL;
    }
};

Node *invertTree(Node *root)
{
    if (root)
    {
        invertTree(root->left);
        invertTree(root->right);
        swap(root->left, root->right);
    }
    return root;
}

void printbt(Node *root)
{
    if(root==NULL)
       return;
    
    printbt(root->left);
    cout<<root->key<<" ";
    printbt(root->right);
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->right = new Node(60);
    root->right->left = new Node(70);

    root=invertTree(root);
    printbt(root);

    return 0;
}