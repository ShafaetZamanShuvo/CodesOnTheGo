#include<iostream>
#include<vector>
#include<queue>
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
    vector<int> rightSideView(TreeNode* root) {
        vector<vector<int>> lst;
        vector<int> res;
        if(root == NULL)
        {
            return res;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            vector<int> temp;
            for(int i = 0; i < size; i++)
            {
                TreeNode *node = q.front();
                q.pop();
                temp.push_back(node->val);
                if(node->left)
                {
                    q.push(node->left);
                }
                if(node->right)
                {
                    q.push(node->right);
                }
            }
            lst.push_back(temp);
        }

        for(int i = 0; i < lst.size(); i++)
        {
            res.push_back(lst[i][lst[i].size() - 1]);
        }

        return res;
        
    }
};