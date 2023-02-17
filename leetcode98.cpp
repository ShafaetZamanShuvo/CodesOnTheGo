#include<iostream>
#include<string>
#include<vector>
using namespace std;


//  Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:

    void inorder(TreeNode *root, vector<int> &v)
    {
        if (root == NULL)
        {
            return;
        }
        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }

    bool isValidBST(TreeNode* root) {

       //perform inorder traversal and keep the values in a vector

         vector<int> v;
            inorder(root, v);
            for (int i = 0; i < v.size() - 1; i++)
            {
                if (v[i] >= v[i + 1])
                {
                    return false;
                }
            }
        
    }
};

int main()
{

    Solution s;
    TreeNode *root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);
    cout << s.isValidBST(root) << endl;
     return 0;
    
}
