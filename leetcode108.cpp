#include <iostream>
#include <vector>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode()
    {
        val = 0;
        left = NULL;
        right = NULL;
    }
    TreeNode(int x)
    {
        val = x;
        left = NULL;
        right = NULL;
    }
    TreeNode(int x, TreeNode *left, TreeNode *right)
    {
        val = x;
        this->left = left;
        this->right = right;
    }
};

class Solution
{
public:

    TreeNode *helper(int left, int right, vector<int> &nums)
    {
        if (left > right)
        {
            return NULL;
        }
        int mid = (left + right) / 2;
        TreeNode *root = new TreeNode(nums[mid]);
        root->left = helper(left, mid - 1, nums);
        root->right = helper(mid + 1, right, nums);
        return root;
    }

    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        return helper(0, nums.size() - 1, nums);
       
    }
};

int main()
{
    Solution s;
    vector<int> nums = {-10, -3, 0, 5, 9};
    TreeNode *root = s.sortedArrayToBST(nums);
    return 0;
}

/*
Explaintation:
Time complexity: O(n)
Space complexity: O(n)

Intuition:
1. The root of the tree is the middle element of the array.
2. The left subtree is the left subarray divided by the middle element.
3. The right subtree is the right subarray divided by the middle element.

Algorithm:
1. Use the helper function to divide the array into two parts.
2. The left part is the left subtree, and the right part is the right subtree.
3. The middle element is the root of the tree.
4. The right subtree is the right subarray divided by the middle element.

*/