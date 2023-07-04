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


void VerSum(Node *root , int hd, map<int,int>mp)
{
    if(root==NULL) return;
    //go -1 side
    VerSum(root->left,hd-1,mp);

    // add in given hd
    mp[hd]+=root->key;
    
    //go +1;
    VerSum(root->right,hd+1,mp);
}


int main()
{
    Node *root = new Node(15);
    root->left = new Node(5);
    root->right = new Node(20);
    root->left->left = new Node(3);
    root->right->left = new Node(18);
    root->right->right = new Node(50);

    map<int,int>mp;
    VerSum(root,0,mp);
    for(auto i:mp)
    {
        cout<<(i.second)<<" ";   
    }
}
