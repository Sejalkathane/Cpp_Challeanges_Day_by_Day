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

// Node *insertBegin(Node* head,int x)
// {
//     Node *temp=new Node(x);
//     temp->next=head;
//     return temp;
// }

Node *insert_end(Node *head, int x)
{
    Node *temp = new Node(x);

    if (head == NULL)
        {return temp;}

    Node *curr = head;
    // move till last one
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    return head ;            
}


void print_ll(Node *head)
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
    // Node *head = new Node(10);
    // head->next = new Node(20);
    // head->next->next = new Node(30);
    // head->next->next->next = new Node(40);

    // for inset begin

    Node *head = NULL;
    head = insert_end(head, 30);
    head = insert_end(head, 20);
    head = insert_end(head, 10);

    print_ll(head);
}