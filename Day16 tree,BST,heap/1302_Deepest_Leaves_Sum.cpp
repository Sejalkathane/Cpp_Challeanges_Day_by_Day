#include <bits/stdc++.h>
using namespace std;


struct TreeNode
{
    int val;
    TreeNode*left;
    TreeNode*right;

    TreeNode(int k)
    {
        val = k;
        left = right = NULL;
    }
};


int deepestLeavesSum(TreeNode *root)
{
    if (root == nullptr)
    {
        return 0;
    }

    int sum = 0;
    queue<TreeNode *> q;
    q.push(root);
    q.push(nullptr); // Separator for the end of the current level

    while (!q.empty())
    {
        TreeNode *curr = q.front();
        q.pop();

        if (curr == nullptr)
        {
            if (!q.empty())
            {
                q.push(nullptr); // Add a separator for the next level
                sum = 0;         // Reset sum for the next level
            }
        }
        else
        {
            sum += curr->val;

            if (curr->left != nullptr)
            {
                q.push(curr->left);
            }
            if (curr->right != nullptr)
            {
                q.push(curr->right);
            }
        }
    }

    return sum;
}

int main()
{
   TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(20);
    root->right = new TreeNode(30);
    root->right->left = new TreeNode(60);
    root->right->right = new TreeNode(70);
   
   cout<<deepestLeavesSum(root);

    return 0;
}

// Given the root of a binary tree, return the sum of
//  values of its deepest leaves.

// Input: root = [1,2,3,4,5,null,6,7,null,null,null,null,8]
// Output: 15
// Example 2:

// Input: root = [6,7,8,2,7,1,3,9,null,1,4,null,null,null,5]
// Output: 19