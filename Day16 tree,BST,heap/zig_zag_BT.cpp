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

    vector<vector<int>> v;
vector<vector<int>> zig_zag(Node *root)
{
    queue<Node*>q;
    q.push(root);
    bool t=true;

    while (!q.empty())
    {
        int k=q.size();
        vector<int>tmp;
        while(k--)
        {

            Node *curr=q.front();
            q.pop();
           if(root->left!=NULL)
           {
              q.push(curr->left);
           }
           if(root->right!=NULL)
           {
            q.push(curr->right);
           }
           tmp.push_back(root->key);
        }
        if(t)
        {
            reverse(v.begin(),v.end());
            t=false;
        }
        else
        {
           t=true;
        }
        v.push_back(tmp);
    }

    return v;
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

    zig_zag(root);

    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[0].size();j++)
        {
            cout<<v[j]<< " ";
        }

        cout<<endl<<;
    }
}