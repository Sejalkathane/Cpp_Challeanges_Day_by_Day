#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;

    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};


void printlist(Node *head)
{
    Node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

// Node *insert_beg(Node *head,int data)
// {
//     Node *temp=new Node(data);
//     temp->next=head;

//     if(head!=NULL)
//     {
//         head->prev=temp;
//     }
//     return temp;
// }


// Node *insert_end(Node *head,int data)
// {
//     Node *temp=new Node(data);
//     if(head==NULL)
//     {
//         return NULL;
//     }

//     Node *curr=head;
//     while(curr->next!=NULL)
//     {
//         curr=curr->next;
//     }
//     curr->next=temp;
//     temp->prev=curr;

//     return head;

// }


// Node *del_beg(Node *head)
// {
//     if(head==NULL)
//     {
//         return NULL;
//     }
//     Node *temp=head;
//     head=head->next;
//     head->prev=NULL;
//     delete temp;

//     return head;
// }


Node *del_end(Node *head)
{
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    else
    { 
        Node *curr=head;
        while(curr->next!=NULL)
        {
            curr=curr->next;
        }
        curr->prev->next=NULL;
        delete curr;
        return head;
    }
}


int main()
{
    Node *head=new Node(10);
    Node *temp1=new Node(20);
    Node *temp2=new Node(30);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;

    // head=insert_beg(head,99);
    // insert_end(head,88);
    // head=del_beg(head);
    del_end(head);



    printlist(head);
    
}