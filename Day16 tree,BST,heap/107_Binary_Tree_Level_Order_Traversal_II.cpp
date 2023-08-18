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


vector<vector<int>> levelOrderBottom(TreeNode *root)
{
    vector<vector<int>> ans;

    if (root == NULL)
        return ans;

    queue<TreeNode *> q;
    q.push(root);

    while (!q.empty())
    {
        int sz = q.size();
        vector<int> v;

        for (int i = 0; i < sz; i++)
        {
            TreeNode *curr = q.front();
            q.pop();

            v.push_back(curr->val);

            if (curr->left != NULL)
            {
                q.push(curr->left);
            }
            if (curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
        ans.push_back(v);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{

    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(20);
    root->right = new TreeNode(30);
    root->right->left = new TreeNode(60);
    root->right->right = new TreeNode(70);

    vector<vector<int>>ans=levelOrderBottom(root);
    
    for(auto i: ans)
    {
        for(auto a:i)
        {
            cout<<a<<" ";
        }

        cout<<endl;

    }
}