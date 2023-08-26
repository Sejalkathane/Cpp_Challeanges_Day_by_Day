#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

int long_no_inc_sub(Node *head)
{
    if(head == NULL)
    {
        return 0;
    }

    Node *curr = head;
    vector<int> arr;
    
    while (curr != NULL)
    {
        arr.push_back(curr->data);
        curr = curr->next;
    }

    int n = arr.size();
    int i = 0;
    int j = 0;
    int maxi = 0;
    
    while (j < n)
    {
        if (arr[j] <= arr[j + 1])
        {
            j++;
        }
        else if (arr[j] > arr[j + 1])
        {
            maxi = max(maxi, j - i + 1);
            i = j + 1;
            j = i;
        }
    }

    return maxi;
}

int main()
{
    // put data in linked list {2, 5, 5, 4, 4, 3, 2, 6, 7, 8, 4, 3, 3}
    Node *head = new Node(2);
    head->next = new Node(5);
    head->next->next = new Node(5);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(4);
    head->next->next->next->next->next = new Node(3);
    head->next->next->next->next->next->next = new Node(2);
    head->next->next->next->next->next->next->next = new Node(6);
    head->next->next->next->next->next->next->next->next = new Node(7);
    head->next->next->next->next->next->next->next->next->next->next = new Node(8);
    head->next->next->next->next->next->next->next->next->next->next->next = new Node(4);
    head->next->next->next->next->next->next->next->next->next->next->next->next = new Node(3);
    head->next->next->next->next->next->next->next->next->next->next->next->next->next = new Node(3);

    cout << long_no_inc_sub(head);
}
