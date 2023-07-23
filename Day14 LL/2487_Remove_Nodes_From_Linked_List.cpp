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

void printlist(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << (curr->data) << " ";
        curr = curr->next;
    }
};

Node *removeNodes(Node *head)
{
    vector<int> v;

    Node *curr = head;
    while (curr != NULL)
    {
        v.push_back(curr->data);
        curr = curr->next;
    }

    int maxi = INT_MIN;
    vector<int> tmp(v.size(), false);
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] < maxi)
            tmp[i] = true;
        maxi = max(v[i], maxi);
        //  v[i] = maxi;
    }

    Node *p = head;
    // int i=0;
    Node *temp = new Node();
    temp->next = head;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        if (tmp[i] == false)
        {
            Node *newNode = new Node(v[i]);
            head->next = newNode;
            head = head->next;
        }
    }
    return temp->next->next;
}
int main()
{
    Node *head = new Node(5);
    head->next = new Node(2);
    head->next->next = new Node(13);
    head->next->next->next = new Node(3);
    head->next->next->next->next = new Node(8);
    // printlist(head);
    removeNodes(head);
    // return 0;
}