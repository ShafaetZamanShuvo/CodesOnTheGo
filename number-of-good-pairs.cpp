#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {

        int count = 0;

        unordered_map<int, vector<int>> map;
        // mow for every number in the array we will store its index in the map
        for (int i = 0; i < nums.size(); i++)
        {
            map[nums[i]].push_back(i);
        }

        // now for every number in the map we will check if the number of indices is greater than 1
        // if yes then we will calculate the number of pairs
        for (auto i : map)
        {
            if (i.second.size() > 1)
            {
                int n = i.second.size();
                count += (n * (n - 1)) / 2; // formula for calculating the number of pairs for n numbers is nC2
            }
        }

        return count;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 2, 3, 1, 1, 3};
    s.numIdenticalPairs(nums);
    return 0;
}