#include <iostream>
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
    int height(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        return max(height(root->left), height(root->right)) + 1;
    }
   
    bool isBalanced(TreeNode *root)
    {
        if (root == NULL)
            return true;
        int left = height(root->left);
        int right = height(root->right);
        if (abs(left - right) > 1)
            return false;
        return isBalanced(root->left) && isBalanced(root->right);
       
    }
};

int main()
{
  //[1,2,3,4,5,6,null,8]
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->left->left->left = new TreeNode(8);

    Solution s;
    cout << s.isBalanced(root);
    return 0;
}