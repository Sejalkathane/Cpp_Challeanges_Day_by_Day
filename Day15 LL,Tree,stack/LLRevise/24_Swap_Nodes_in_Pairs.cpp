#include <bits/stdc++.h>
using namespace std;

// Given a linked list, swap every two adjacent nodes and return its head. You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)

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




Node *swapPairs(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        return head;
    }
    for (Node *curr = head; curr != NULL && curr->next != NULL; curr = curr->next->next)
    {
        Node *temp = new Node (NULL);
        temp->data = curr->next->data;
        curr->next->data = curr->data;
        curr->data = temp->data;
    }

    return head;
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

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    head=swapPairs(head);
    print_ll(head);

    cout << endl;
    return 0;
}