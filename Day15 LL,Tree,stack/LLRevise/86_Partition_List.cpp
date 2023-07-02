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

Node *partition(Node *head, int x)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    // two New Node
    Node *list1 = new Node(0);
    Node *list2 = new Node(0);

    // two pointer
    Node *l1 = list1;
    Node *l2 = list2;

    while (head)
    {
        //  if it less value
        if (head->data < x)
        {
            // put in l1
            l1->next = head;
            l1 = l1->next;
        }

        else
        {
            // put in l2
            l2->next = head;
            l2 = l2->next;
        }

        // if euual
        head = head->next;
    }

    // join two
    l1->next = list2->next;
    l2->next = NULL;

    //  return list1;
    return list1->next;
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
    head->next = new Node(30);
    head->next->next = new Node(20);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

   partition(head,40);
    print_ll(head);
    cout << endl;
    return 0;
}