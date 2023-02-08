#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {

        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
            if (mp[nums[i]] > 1)
                return true;
        }

        return false;
    }
};

int main()
{
    Solution s;
    vector<int> nums;
    for (int i = 0; i < 10; i++)
    {
        nums.push_back(i);
    }
    nums.push_back(1);
    cout << s.containsDuplicate(nums) << endl;

    return 0;
}