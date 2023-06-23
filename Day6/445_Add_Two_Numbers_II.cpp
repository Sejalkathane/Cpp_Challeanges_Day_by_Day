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
    bool i = true;
    while (curr != NULL)
    {
        if (i == true)
        {
            i = false;
            curr = curr->next;
            continue;
        }
        cout << (curr->data) << " ";
        curr = curr->next;
    }
};

int main()
{
    Node *l1 = new Node(2);
    l1->next = new Node(4);
    l1->next->next = new Node(3);

    Node *l2 = new Node(5);
    l2->next = new Node(6);
    l2->next->next = new Node(4);
    
    stack<int> s1;
    stack<int> s2;

    while (l1!=NULL)
    {
        s1.push(l1->data);
        l1 = l1->next;
    }

    while (l2!=NULL)
    {
        s2.push(l2->data);
        l2 = l2->next;
    }

    Node *Temp = new Node(0);
    Temp->next = nullptr;
    int carry=0, num1=0, num2=0;

    while (!s1.empty() || !s2.empty() || carry)
    {

        if (!s1.empty())
        {
            num1 = s1.top();
            s1.pop();
        }

        if (!s2.empty())
        {
            num2 = s2.top();
            s2.pop();
        }

        int sum = num1 + num2 + carry;
        int value = sum % 10;
        carry = sum / 10;

        // Reset num1 and num2
        num1 = 0;
        num2 = 0;

        Node *newNode = new Node(value);
        newNode->next = Temp->next;
        Temp->next = newNode;
    }
    printlist(Temp);
    return 0;
}