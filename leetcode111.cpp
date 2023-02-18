#include <iostream>
#include <vector>
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

class Solution {
public:
    void height(TreeNode * root, int level, vector<int> &lst)
    {
        if(root && !root->left && !root->right)
        {
            lst.push_back(level);
        }
        if(root)
        {
            height(root->left, level+1, lst);
        }
         if(root)
        {
            height(root->right, level+1, lst);
        }
    }
    int minDepth(TreeNode* root) {
        if(root == NULL)
            return 0;

        vector<int> heights;
        int minVal = INT_MAX;    
        height(root, 1, heights);
        for(int i = 0; i< heights.size(); i++)
        {
            if(heights[i] < minVal)
            {
                minVal = heights[i];
            }
        }   

        return minVal;
    }
};

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->left->left->left = new TreeNode(8);

    Solution s;
    cout << s.minDepth(root);
    return 0;
}