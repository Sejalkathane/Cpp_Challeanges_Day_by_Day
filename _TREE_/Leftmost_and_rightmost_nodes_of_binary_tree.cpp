#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

void printCorner(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int n = q.size();

        for (int i = 0; i < n; i++)
        {
            Node *t = q.front();
            q.pop();
            
            if (i == 0 || i == n - 1)
            {
                cout << t->data << " ";
            }

            if (t->left != NULL)
            {
                q.push(t->left);
            }

            if (t->right != NULL)
            {
                q.push(t->right);
            }
        }
    }
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    printCorner(root);
}

// Given a Binary Tree of size N, Print the corner nodes ie- the node at the leftmost
// and rightmost of each level.

// Example 1:
// Input :
//          1
//        /  \
//      2      3
//     / \    / \
//    4   5  6   7
// Output: 1 2 3 4 7
// Explanation:
// Corners at level 0: 1
// Corners at level 1: 2 3
// Corners at level 2: 4 7

// Example 2:
// Input:

//         10
//       /    \
//      20     30
//     / \  
//    40  60
// Output: 10 20 30 40 60
// Your Task:
// You dont need to read input. Complete the function printCorner() which takes
//  root node as input parameter and prints the corner nodes separated by spaces.
//   The left corner should be printed before the right for each level starting from level 0.

// Note: Don't print a new line after printing all the corner nodes.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(number of nodes in a level)
