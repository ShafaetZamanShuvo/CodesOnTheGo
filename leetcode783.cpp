#include<iostream>
#include<vector>

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
    void inorder(TreeNode *root, vector<int> &lst)
    {
        if(root== NULL)
        {
            return;
        }
        
        if(root->left)
        {
            inorder(root->left, lst);
        }
        lst.push_back(root->val);
        if(root->right)
        {
            inorder(root->right, lst);
        }
    }
    int minDiffInBST(TreeNode* root) {
        vector<int> vec;
        if(root == NULL)
        {
            return 0;
        }
        else
        {
            inorder(root, vec);
        }

        int minDistance = INT_MAX;
        for(int i =0; i< vec.size()-1; i++)
        {
            cout << vec[i]<<endl;
            if(abs(vec[i]-vec[i+1]) < minDistance)
            {
                minDistance = abs(vec[i]-vec[i+1]);
            }
        }

        return minDistance;


    
    }
};