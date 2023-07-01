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

// delete_start Node;

// Node *delete_st(Node *head)
// {
//     Node *temp = head->next;
//     delete head;
//     return temp;
// }


Node *del_end(Node *head)
{
    //for 0 node
    if(head==NULL)
    {
        return NULL;
    }
    //for one node
    if(head->next==NULL)
    {
        delete(head);
        return NULL;
    }
    //for futher
    Node *curr=head;
    while(curr->next->next!=NULL)
    {
        curr=curr->next;
    }
    delete(curr->next);
    curr->next=NULL;
    return head;
}


void printLL(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << (curr->data) << " ";
        curr = curr->next;
    }
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    
    // head=delete_st(head);
    head=del_end(head);
    printLL(head);
    // cout << endl;
    return 0;
}