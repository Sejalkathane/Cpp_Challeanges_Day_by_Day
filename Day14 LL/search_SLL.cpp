#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};


int search(Node *head,int data)
{
    int pos=1;
   
    for(Node *curr=head;curr!=NULL;curr=curr->next)
    {
        if(curr->data==data)
        {
            return pos;
        }
        else
        {
            pos++;
        }
    }
    return 0;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    if(search(head,90)==0)
    {
        cout<<"NOT FOUND";
    }
    else
    {
    cout<<search(head,90);

    }
    return 0;
}