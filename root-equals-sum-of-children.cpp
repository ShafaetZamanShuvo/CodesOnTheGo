#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    bool checkTree(TreeNode *root)
    {
        if (root == NULL)
            return true;
        int sum = 0;
        if (root->left != NULL)
            sum += root->left->val;
        if (root->right != NULL)
            sum += root->right->val;
        if (root->val == sum)
            return true;
        return false;
    }
};

int main()
{
    Solution s;
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(8);
    root->right = new TreeNode(2);
    cout << s.checkTree(root) << endl;
    return 0;
}
