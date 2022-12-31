#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> groupThePeople(vector<int> &groupSizes)
    {

        vector<vector<int>> res;
        unordered_map <int, vector<int>> umap;
        
        for(int i = 0; i< groupSizes.size(); i++)
        {
            umap[groupSizes[i]].push_back(i);
        }
        

        for(auto it: umap)
        {
            cout << it.first << " groups: ";
            int group_size = 0;
            vector<int> temp;
            for(int i = 0; i< it.second.size() ; i++)
            {
                cout << it.second[i] << " ,";
                group_size++;
                temp.push_back(it.second[i]);
                if(group_size == it.first)
                {
                    res.push_back(temp);
                    temp.clear();
                    group_size = 0;   
                }
            }   
            cout << endl;

        }

        return res;

    }
};

int main()
{
    Solution s;
    vector<int> groupSizes = {3, 3, 3, 3, 3, 1, 3};
    vector<vector<int>> ans;
    ans = s.groupThePeople(groupSizes);
    for(int i = 0; i<ans.size(); i++)
    {
        for(int j = 0; j< ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;

}