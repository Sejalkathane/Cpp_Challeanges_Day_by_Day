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


Node * LCA(Node * root, Node *p,Node *q )
{
       while (root) 
     {
            if (p->key < root->key && q->key < root->key)
                root = root->left;
            else if (p->key > root->key && q->key > root->key) 
                root = root->right;
            else break;
     }
         return root;

}

int main()
{
    Node *root = new Node(15);
    root->left = new Node(5);
    root->right = new Node(20);
    root->left->left = new Node(3);
    root->right->left = new Node(18);
    root->right->right = new Node(50);

    cout<<(LCA(root,root->left,root->right)->key);
}