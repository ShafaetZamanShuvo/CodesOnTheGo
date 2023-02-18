#include<iostream>
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
    int height(TreeNode *root)
    {
        if(root == NULL)
        {
            return 0;
        }
        return max(height(root->left), height(root->right)) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        //solve using bfs

        int left_height = 0;
        int right_height = 0;

        if(root == NULL)
        {
            return 0;
        }
        else
        {
            left_height = height(root->left);
            right_height = height(root->right);
        }

        int left_diameter = diameterOfBinaryTree(root->left);
        int right_diameter = diameterOfBinaryTree(root->right);

        return max(left_height + right_height, max(left_diameter, right_diameter));
        
    }
};