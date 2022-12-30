#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>> &logs, int k)
    {
        unordered_map<int, unordered_set<int>> mp;

        vector<int> res, final_res(k,0);

        for (int i = 0; i < logs.size(); i++)
        {
            mp[logs[i][0]].insert(logs[i][1]);
        }

        int count = 0;
        for (auto x : mp)
        {
            cout << x.first << " ";
            cout << x.second.size() << endl;
            res.push_back(x.second.size());
            count++;
        }
        
        unordered_map<int, int> uam_map;

        for(int i = 0; i<res.size(); i++)
        {
            uam_map[res[i]]++;
        }
        // vector<vector<int>> user_active_min(k);
        for (auto it : uam_map)
        {
            cout << it.first << " " << it.second << endl;
            // user_active_min[it.first-1].push_back(it.second);
            final_res[it.first-1] = it.second;
        }

        //print user_active_min

        // for(int i = 0; i<user_active_min.size(); i++)
        // {
        //     cout << "i = " << i << " ";
        //     for(int j = 0; j<user_active_min[i].size(); j++)
        //     {
        //         cout << "user ="<< user_active_min[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        
        //sort final_res
        // sort(final_res.begin(), final_res.end());
        // final_res.resize(k);
        return final_res;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> logs = {{0, 5}, {1, 2}, {0, 2}, {0, 5}, {1, 3}};
    int k = 5;

    // vector<vector<int>> logs = {{1, 1}, {2, 2}, {2, 3}};
    // int k = 4;

    cout << logs.size() << endl;
    vector<int> ans = s.findingUsersActiveMinutes(logs, k);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}