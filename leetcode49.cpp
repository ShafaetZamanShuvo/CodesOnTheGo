#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
//This solution is O(n^3)
// class Solution
// {
// public:
//     bool isAnagram(string s, string t)
//     {
//         unordered_map<char, int> mp;
//         for (int i = 0; i < s.size(); i++)
//         {
//             mp[s[i]]++;
//         }
//         for (int i = 0; i < t.size(); i++)
//         {
//             mp[t[i]]--;
//         }
//         for (auto it = mp.begin(); it != mp.end(); it++)
//         {
//             if (it->second != 0)
//                 return false;
//         }
//         return true;
//     }

//     vector<vector<string>> groupAnagrams(vector<string> &strs)
//     {
//         vector<vector<string>> result;
//         vector<string> temp;
//         vector<bool> visited(strs.size(), false);

//         for (int i = 0; i < strs.size(); i++)
//         {
//             if (visited[i] == false)
//             {
//                 temp.push_back(strs[i]);
//                 visited[i] = true;
//                 for (int j = i + 1; j < strs.size(); j++)
//                 {
//                     if (visited[j] == false && isAnagram(strs[i], strs[j]))
//                     {
//                         temp.push_back(strs[j]);
//                         visited[j] = true;
//                     }
//                 }
//                 result.push_back(temp);
//                 temp.clear();
//             }
//         }

//         return result;
//     }
// };

// better optimized solution
class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> mp;
        for (int i = 0; i < strs.size(); i++) //O(n)
        {
            string temp = strs[i]; //O(n)
            sort(temp.begin(), temp.end()); //O(nlogn)
            mp[temp].push_back(strs[i]); //O(1)
        }
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            result.push_back(it->second);
        }
        return result;
    }
};

int main()
{

    Solution s;
    vector<string> strs;
    strs.push_back("eat");
    strs.push_back("tea");
    strs.push_back("tan");
    strs.push_back("ate");
    strs.push_back("nat");
    strs.push_back("bat");


    vector<vector<string>> result = s.groupAnagrams(strs);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}