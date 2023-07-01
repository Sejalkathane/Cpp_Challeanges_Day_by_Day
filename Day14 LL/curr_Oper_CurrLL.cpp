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

void printll(Node *head)
{
    Node *curr = head;
    while (curr->next != head)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << curr->data;
}

// indert begin()
//  Node *insertBeg(Node *head,int data)
//  {
//    Node *temp=new Node(data);
//    Node *curr=head;
//    while(curr->next!=head)
//    {
//      curr=curr->next;
//    }
//    curr->next=temp;
//    temp->next=head;

//   return temp;
// }

//efficent in book
// Node *insertend(Node *head,int data)
// {
//   Node *temp=new Node(data);
//   Node *curr=head;
//   while(curr->next->next!=head)
//   {
//     curr=curr->next;
//   }
//   curr->next=temp;
//   temp->next=head;

//   //return head only change
//   return head;
// }


//efficent no while
// Node *delhead(Node *head)
// {
//   if(head==NULL)
//      return NULL;

//   if(head ->next==head)
//   {
//     delete head;
//     return NULL;
//   }

//   head->data = head->next->data;
//   Node *temp = head->next;
//   head->next =head->next->next;

//   delete temp;
//   return head;
  
// }



Node *deleteKthNode(Node *head,int pos)
{
    if(head==NULL)  return NULL;
     Node *curr=head;
     for(int i=1;i<=pos-2;i++)
     {
        curr=curr->next;
     }
     Node *temp=curr->next;
     curr->next=curr->next->next;

     delete temp;
     return head;
}



int main()
{
    // curcular ll
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);
    head->next->next->next->next->next->next = head;

    // head = insertBeg(head, 99);
    // head = insertend(head, 100);
    // head=delhead(head);

    head=deleteKthNode(head,3);

    printll(head);
    // cout << endl;
    return 0;
}