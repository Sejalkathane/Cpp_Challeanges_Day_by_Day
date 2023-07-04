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

// it always present on left of root node
vector<int>v;

//simple solution is do inorder traversal store in vector return k-1 value from vector
void inorder(Node *root)
{
    inorder(root->left);
    v.push_back(root->key);
    inorder(root->right);
}

int main()
{
    Node *root = new Node(15);
    root->left = new Node(5);
    root->right = new Node(20);
    root->left->left = new Node(3);
    root->right->left = new Node(18);
    root->right->right = new Node(50);

    inorder(root);
    int k=4;
    int ans=v[k-1];
    cout<<ans;

    return 0;
}