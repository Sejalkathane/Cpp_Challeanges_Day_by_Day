#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node*next;

    Node(int x){
        data=x;
        next=NULL;
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



Node *compute(Node *head)
    {
      Node *curr=head;
      
      //till curr->next!=NULL
      while(curr->next)
      {
          // if(currenct leadd than next)
          if(curr->data < curr->next->data)
          {
             //make current data =current next data 
              curr->data=curr->next->data;
            //   put current in temp
              Node*temp=curr->next;
            //   move curr->next to curr->next_>next
              curr->next=curr->next->next;

            //   delete curr ie. temp
              delete temp;

              //again current assign to head;
              curr=head;
          }
          else
          {
              //onlymove curr
              curr=curr->next;
          }
      }
      return head;
    }

int main()
{
    Node *head=new Node(12);
    head->next=new Node(15);
    head->next->next=new Node(10);
    head->next->next->next=new Node(11);
    head->next->next->next->next=new Node(5);
    head->next->next->next->next->next=new Node(6);
    head->next->next->next->next->next->next=new Node(2);
    head->next->next->next->next->next->next->next=new Node(3);

    compute(head);
    printlist(head);


    return 0;
}