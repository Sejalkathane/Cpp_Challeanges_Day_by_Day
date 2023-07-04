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

Node *floor(Node *root, int x)
{
    Node *res = NULL;

    if (root == NULL)
        return NULL;
    while (root != NULL)
    {
        if (root->key == x)
        {
            return root;
        }
        else if (root->key > x)
        {
            root = root->left;
        }
        else if (root->key < x)
        {
            res = root;
            root = root->right;
        }
    }
    return res;
}

Node *ceil(Node *root, int x)
{
    Node *res = NULL;

    if (root == NULL)
        return NULL;
    if (root->key == x)
        return root;
    else if (root->key < x)
    {
        root = root->right;
    }
    else
    {
        res = root;
        root = root->right;
    }
    return res;
}

int main()
{
    Node *root = new Node(15);
    root->left = new Node(5);
    root->right = new Node(20);
    root->left->left = new Node(3);
    root->right->left = new Node(18);
    root->right->right = new Node(50);

    cout << (floor(root, 21)->key)<< " ";
    cout << (ceil(root, 7)->key);                                                                                               
    return 0;
}