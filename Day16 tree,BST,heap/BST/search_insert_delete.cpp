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

void inorder(Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}

// search element::

// bool search(Node *root, int x)
// {
//     while (root != NULL)
//     {
//         if (root->key == x)
//         {
//             return true;
//         }

//         if (root->key > x)
//         {
//             root = root->left;
//         }
//         else
//         {
//             root = root->right;
//         }
//     }
//     return false;
// }



//Insertion::
// Node* insert(Node * root,int x)
// {
//     if(root==NULL) return new Node(x);
//     else if(root->key<x)
//     {
//         root->right=insert(root->right,x);
//     }
//     else
//     {root->left=insert(root->left,x);}
// }


Node *deleteNode(Node*root,int x)
{
   if(root==NULL) return root;
   if(root->key>x)
   {
    root->left=deleteNode(root->left,x);
   }
   else if(root->key<x)
   {
    root->left=deleteNode(root->right,x);
   }
   else
   {
     if(root->left==NULL)
     {
        Node*temp=root->right;
        delete root;
        return temp;
     }
     else if(root->right==NULL)
     {
        Node*temp=root->left;
        delete root;
        return temp;
     }
   }
}

int main()
{

    Node *root = new Node(15);
    root->left = new Node(5);
    root->right = new Node(20);
    root->left->left = new Node(3);
    root->right->left = new Node(18);
    root->right->right = new Node(50);
    
    // cout<<search(root,20);
    // insert(root,40);
    deleteNode(root,3);
    


    inorder(root);

    return 0;
}