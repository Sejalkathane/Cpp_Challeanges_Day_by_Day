#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *right;
    TreeNode *left;

    TreeNode(int x)
    {
        val = x;
        left = NULL;
        right = NULL;
    }
};

void printNode(TreeNode *root, string ans, vector<string> &result)
{
    if (root == NULL)
        return;

    ans += to_string(root->val) + "->";
    if (root->left == NULL && root->right == NULL)
    {
        // remove last two character ie ->
        ans.erase(ans.length() - 2, 2);
        result.push_back(ans);
    }

    printNode(root->left, ans, result);
    printNode(root->right, ans, result);
}
vector<string> binaryTreePaths(TreeNode *root)
{
    vector<string> result;
    string ans;

    printNode(root, ans, result);
    return result;
}
int main()
{
    TreeNode *head = new TreeNode(1);
    head->left = new TreeNode(2);
    head->right = new TreeNode(3);
    head->left->right = new TreeNode(5);

    vector<string> ans = binaryTreePaths(head);

    for (auto a : ans)
    {
        cout << a << endl;
    }
}