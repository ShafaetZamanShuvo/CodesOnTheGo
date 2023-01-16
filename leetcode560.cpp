#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {

//         int sum = 0, count = 0;
//         for(int i =0; i< nums.size(); i++)
//         {

//             for(int j = i; j<nums.size(); j++)
//             {
//                 sum = sum + nums[j];
//                 if(sum == k)
//                 {
//                     count++;
//                 }
//             }
//             sum = 0;
//         }

//         return count;

//     }
// };

class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {

        unordered_map<int, int> mp;
        int count = 0;
        int sum = 0;
        mp[sum]++;
        vector<int> prefix_sum;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            prefix_sum.push_back(sum);
           // mp[sum]++;
        }

        for (int i = 0; i < nums.size(); i++)
        {

            if (mp.find(prefix_sum[i] - k) != mp.end())
            {
                count += mp[prefix_sum[i] - k];
            }
            mp[sum]++;
        }

        return count;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1};
    cout << s.subarraySum(nums, 0);
}