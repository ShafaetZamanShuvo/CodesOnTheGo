#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findShortestSubArray(vector<int> &nums)
    {

        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        int max = 0;
        for (auto i : mp)
        {
            if (i.second > max)
            {
                max = i.second;
            }
        }

        int min = nums.size();

        for (auto i : mp)
        {
            if (i.second == max)
            {
                int first = 0;
                int last = 0;
                for (int j = 0; j < nums.size(); j++)
                {
                    if (nums[j] == i.first)
                    {
                        first = j;
                        break;
                    }
                }
                for (int j = nums.size() - 1; j >= 0; j--)
                {
                    if (nums[j] == i.first)
                    {
                        last = j;
                        break;
                    }
                }

                if (last - first + 1 < min)
                {
                    min = last - first + 1;
                }
            }
        }

        return min;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 2, 2, 3, 1, 4, 2};
    cout << s.findShortestSubArray(nums) << endl;
    return 0;
}