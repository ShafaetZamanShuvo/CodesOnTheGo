#include <iostream>
#include <unordered_set>
#include <vector>
#include <cmath>
using namespace std;

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {

        // take two sets
        //  one for storing the elements
        //  other is empty

        unordered_set<int> elem;
        for (int i = 0; i < nums.size(); i++)
        {
            elem.insert(nums[i]);
        }

        if (elem.size() == 0)
        {
            return 0;
        }

        if (elem.size() == 1)
        {
            return 1;
        }

        int longest = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];
            if (elem.find(num - 1) == elem.end())
            {
                int len = 0;
                while (elem.find(num + len) != elem.end())
                {
                    len++;
                }
                longest = max(longest, len);
            }
        }

        return longest;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    cout << s.longestConsecutive(nums) << endl;
    return 0;
}