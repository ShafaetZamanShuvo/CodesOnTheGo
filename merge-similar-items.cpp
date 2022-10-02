#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>> &items1, vector<vector<int>> &items2)
    {

        vector<vector<int>> ans;
        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < items1.size(); i++)
        {

            mp[items1[i][0]].push_back(items1[i][1]);
        }
        for (int i = 0; i < items2.size(); i++)
        {

            mp[items2[i][0]].push_back(items2[i][1]);
        }

        // print the map
        for (auto i : mp) //time O(n)
        {
            cout << i.first << " ";
            for (int j = 0; j < i.second.size(); j++)
            {
                cout << i.second[j] << " ";
            }
            cout << endl;
        }

        for(auto i: mp) //time complexity is O(n)
        
        {
            int sum = 0;
            for(int j = 0; j<i.second.size(); j++ )
            {
                sum = sum + i.second[j];
            }
            //now push i.first and sum
            vector<int> temp;
            temp.push_back(i.first);
            temp.push_back(sum);
            ans.push_back(temp);
        }

        //sort ans on the basis of first element
        sort(ans.begin(), ans.end(), [](vector<int> &a, vector<int> &b) { //time complexity of sort is O(nlogn)
            return a[0] < b[0];
        });

        return ans;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> items1 = {{1, 1}, {4, 5}, {3, 8}};
    vector<vector<int>> items2 = {{3, 1}, {1, 5}};
    vector<vector<int>> ans = s.mergeSimilarItems(items1, items2);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}