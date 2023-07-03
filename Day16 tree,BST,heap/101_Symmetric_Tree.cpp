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

bool isSemmetric(Node *p, Node *q)
{
    if (p == NULL && q == NULL)
    {
        return true;
    }
    if (p == NULL || q == NULL)
    {
        return false;
    }
    if (p->key != q->key)
    {
        return false;
    }

    return isSemmetric(p->left, q->right) && isSemmetric(p->right, q->left);
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(20);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->right = new Node(40);
    root->right->left = new Node(50);

    cout << isSemmetric(root->left, root->right);
}