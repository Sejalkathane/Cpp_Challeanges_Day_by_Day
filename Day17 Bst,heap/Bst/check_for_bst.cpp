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

vector<int> v;

// check Bst
void CheckBst(Node *root)
{
    if (root == NULL)
        return;
    CheckBst(root->left);
    v.push_back(root->key);
    CheckBst(root->right);
}

int main()
{

    Node *root = new Node(15);
    root->left = new Node(5);
    root->right = new Node(20);
    root->left->left = new Node(3);
    root->right->left = new Node(18);
    root->right->right = new Node(50);

    CheckBst(root);
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > v[i + 1])
        {
            cout << "False";
            return 0;
        }
    }
    cout << "True";
}