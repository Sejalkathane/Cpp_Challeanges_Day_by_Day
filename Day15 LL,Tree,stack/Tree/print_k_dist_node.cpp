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

void printkthdist(Node *root,int k)
{
    
    if(k==0)
    {
        cout<<root->key<<" ";
    }
    else
    {
        printkthdist(root->left,k-1);
        printkthdist(root->right,k-1);
    }
}

int main()
{

    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);

    printkthdist(root,2);
}