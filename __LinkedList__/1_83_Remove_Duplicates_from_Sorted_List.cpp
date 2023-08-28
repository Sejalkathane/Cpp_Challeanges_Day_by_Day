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

void Remove_dul(Node *head)
{
    Node *curr = head;
    //till we not null
    while (curr != NULL && curr->next != NULL)
    {
        // if next data is same
        if (curr->data == curr->next->data)
        {
            // store current in temp
            Node *temp = curr->next;
            //move next;
            curr->next = curr->next->next;
            //delete current
            delete (temp);
        }
        else
            curr = curr->next;
    }
}

void printlist(Node *head)
{
    if (head == NULL)
        return;
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(20);
    head->next->next->next = new Node(30);
    head->next->next->next->next = new Node(30);
    head->next->next->next->next->next = new Node(40);
    head->next->next->next->next->next->next = new Node(40);
    head->next->next->next->next->next->next->next = new Node(40);
    head->next->next->next->next->next->next->next->next = new Node(50);
    Remove_dul(head);
    printlist(head);

    return 0;
}