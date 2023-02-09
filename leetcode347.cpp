#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {

public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int > mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }

        vector<int> result;
        for (int i = 0; i<k; i++ )
        {
            int max = 0;
            int max_index;
            for(auto it = mp.begin(); it != mp.end(); it++)
            {
                if(it->second > max)
                {
                    cout << it->first << " " << it->second << endl;
                    max = it->second;
                    max_index = it->first;
                }
            }
            mp[max_index] = 0;
            result.push_back(max_index);
            
        }
        return result;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1,1,1,2,2,3};
    vector<int> result = s.topKFrequent(nums, 2);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}