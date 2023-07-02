#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;

    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

// Threee traversal technique::

// 1.Inorder

void inorder(Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}

void preorder(Node *root)
{
    if (root != NULL)
    {
        cout << root->key << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(Node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->key << " ";
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(24);
    root->left->right = new Node(25);
    root->right->left = new Node(36);
    root->right->right = new Node(37);

    cout << " ::INORDER TRAVERSAL:: " << endl;
    inorder(root);
    cout << endl;
    cout << " ::PREORDER TRAVERSAL:: " << endl;
    preorder(root);
    cout << endl;
    cout << " ::POSTORDER TRAVERSAL:: " << endl;
    postorder(root);
}