#include<bits/stdc++.h>
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


//similar to check bst
//use unordered map

unordered_map<int,int>mp;

void inorder(Node *root)
{
    inorder(root->left);
    mp[root->key]++;
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

    int sum=25;
     inorder(root);
    for(int i=0;i<mp.size();i++) 
    {
        if(mp.find(sum-mp[i])!=mp.end())
        {
            cout<<"find";
            return 0;
        }
    }
    cout<<"Not Found";
    
}