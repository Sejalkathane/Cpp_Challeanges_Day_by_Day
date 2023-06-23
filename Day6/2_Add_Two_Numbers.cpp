#include <bits/stdc++.h>
using namespace std;

// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

// Input: l1 = [2,4,3], l2 = [5,6,4]
// Output: [7,0,8]
// Explanation: 342 + 465 = 807.

// Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
// Output: [8,9,9,9,0,0,0,1]

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
    bool i=true;
    while (curr != NULL)
    {
        if(i==true)
           {
              i=false;
              curr = curr->next;
              continue; 
           }
        cout << (curr->data) << " ";
        curr = curr->next;
    }
};

int main()
{
   //        |2| -> |4| -> |2|
   //        |5| -> |6| -> |4|
    Node *l1 = new Node(2);
    l1->next = new Node(4);
    l1->next->next = new Node(3);

    Node *l2 = new Node(5);
    l2->next = new Node(6);
    l2->next->next = new Node(4);


    Node *dummy=new Node(0);
    Node *temp=dummy;

    int carry=0;

    while(l1!=NULL || l2!=NULL || carry)
    {
        int sum=0;

        if(l1!=NULL)
        {
            sum+=l1->data;
            l1=l1->next;
        }

        if(l2!=NULL)
        {
            sum+=l2->data;
            l2=l2->next;
        }

        sum+=carry;
        carry=sum/10;
        Node *node=new Node(sum%10);
        temp->next=node;
        temp=temp->next;

    }

    // cout<<dummy<<endl;
    printlist(dummy);

    return 0;
}