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


void top_view(Node *root)
{


    if(root==NULL)  return ;

    //create a map to store horizontal dist element
    map<int,int>mp;
    // to get perticular node horizontally 
    queue<pair<Node*,int>>q;
    q.push({root,0}); //add root give him index 0
    while(!q.empty())
    {

        auto i=q.front();
        q.pop();
        
        //take first
        Node *curr=i.first;
        //horzontal distance
        //put second in hd
        int hd=i.second;

         //it means not found
        if(mp.find(hd)==mp.end())
        {
           mp[hd]=curr->key;   //then push in map
        }
        if(curr->left !=NULL)
            q.push({curr->left,hd-1});    //else find for -1 and +1 index from 0
        if(curr->right!=NULL)
             q.push({curr->right,hd+1});
    }
    
    for(auto i :mp)
    {
        cout<<i.second<<" ";
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

    top_view(root);

    return 0;
}