// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string str;
//     cin >> str;

//     string s = "";
//     for (int i = 0; i < str.size(); i++)
//     {
//         if (i % 2 == 0)
//         {
//             s += str[i];
//         }
//     }
//     for (int i = 0; i < str.size(); i++)
//     {
//         if (i % 2 != 0)
//         {
//             s += str[i];
//         }
//     }

//     char c = ' ';
//     int ind = -1;
//     for (auto i : s)
//     {
//         if (count(s.begin(), s.end(), i) == 1)
//         {
//             c = i;
//             break;
//         }
//         else
//         {
//             ind += 1;
//         }
//     }

//     if (ind == s.size() - 1)
//     {
//         cout << -1;
//     }
//     else
//     {
//         cout << c;
//     }

//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace  std;

// struct Node {
//     int data;
//     Node* next;
// };

// // Function to create a new node
// Node* createNode(int data) {
//     Node* newNode = new Node();
//     newNode->data = data;
//     newNode->next = nullptr;
//     return newNode;
// }

// // Function to insert a node at the end of the linked list
// Node* insertNode(Node* head, int data) {
//     if (head == nullptr) {
//         head = createNode(data);
//     } else {
//         Node* temp = head;
//         while (temp->next != nullptr) {
//             temp = temp->next;
//         }
//         temp->next = createNode(data);
//     }
//     return head;
// }

// Function to display the elements of the linked list
// void displayLinkedList(Node* head) {
//     Node* temp = head;
//     while (temp != nullptr) {
//         std::cout << temp->data << " ";
//         temp = temp->next;
//     }
//     std::cout << std::endl;
// }

// vector<int>arr;
// void findap(Node* head)
// {
//     Node*curr=head;
//    while(curr!=nullptr)
//    {
//        arr.push_back(curr->data);
//        curr=curr->next;
//    }
// }

// int findLongestAPLength(vector<int>& arr) {
//       int n = arr.size();
//     if (n <= 1) {
//         return n;
//     }

//     std::unordered_map<int, int> lengths;
//     int maxLength = 0;

//     for (int i = 0; i < n; i++) {
//         int currentLength = 1;

//         for (int j = arr[i] + 1; ; j++) {
//             if (lengths.find(j) != lengths.end()) {
//                 currentLength = lengths[j] + 1;
//             } else {
//                 break;
//             }
//         }

//         lengths[arr[i]] = currentLength;
//         maxLength = std::max(maxLength, currentLength);
//     }

//     return maxLength;
// }
// int main() {
//     int length;
//     std::cout << "Enter the length of the linked list: ";
//     std::cin >> length;

//     Node* head = nullptr;
//     int element;

//     std::cout << "Enter the elements of the linked list: ";
//     for (int i = 0; i < length; i++) {
//         std::cin >> element;
//         head = insertNode(head, element);
//     }

//     // std::cout << "Linked list elements: ";
//     // displayLinkedList(head);

//    findap(head);
//     cout<<findLongestAPLength(arr);
//     // for (int i = 0; i < arr.size(); i++) {
//     //     cout<< arr[i];
//     // }

//     return 0;
// }

// ........................................................................................
//find the longest subarry with consecative ap

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={10,7,4,6,8,10,11};
    // vector<int>v={0,1,2,3,4,5,23};
    int n=v.size();
    int i=0;
    int j=i+1;
    int maxi=INT_MIN;
    int c=v[0]-v[1];
    while(j<n)
    {
       if(v[j]-v[j+1]==c)
       {
         j++;
       }
       else
       {
         maxi=max(maxi,(j-i+1));
         i=j;
         c=v[j]-v[j+1];
         j++;
       }
    }
    cout<<maxi;
}
