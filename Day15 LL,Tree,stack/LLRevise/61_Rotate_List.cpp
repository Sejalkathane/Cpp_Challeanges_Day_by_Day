#include <bits/stdc++.h>
using namespace std;

// Given the head of a linked list, rotate the list to the right by k places.
// Input: head = [1,2,3,4,5], k = 2
// Output: [4,5,1,2,3]

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

Node *rotateRight(Node *head, int k)
{

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *curr = head;
    int size = 1;

    while (curr->next != NULL)
    {
        size++;
        curr = curr->next;
    }
    curr->next = head;
    k = k % size;

    while (--size >= k)
    {
        curr = curr->next;
    }

    Node *first = curr->next;
    curr->next = NULL;

    return first;
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

    head=rotateRight(head,2);
    print_ll(head);

    return 0;
}