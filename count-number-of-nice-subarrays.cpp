#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numberOfSubarrays(vector<int> &nums, int k)
    {
        int n = nums.size();
        // replace the odd number with 1, and even number with 0
        for (int i = 0; i < n; i++)
        {
            if (nums[i] % 2 == 1)
                nums[i] = 1;
            else
                nums[i] = 0;
        }

        // find the number of subarrays where sum of elements is k using hashmap
        int sum = 0;
        int ans = 0;
        unordered_map<int, int> mp; // sum, count
        mp[0] = 1;                  // for the case when sum is k from the beginning
        for (int i = 0; i < n; i++)
        {                   // O(n)
            sum += nums[i]; // sum of elements
            if (mp.find(sum - k) != mp.end())
            {                       // if sum - k exists in the map
                ans += mp[sum - k]; // add the count of sum - k to the answer
            }
            mp[sum]++; // add the sum to the map
        }

        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 1, 2, 1, 1};
    int k = 3;
    cout << s.numberOfSubarrays(nums, k) << endl;
    return 0;
}