#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int res = nums[0];
        int left = 0;
        int right = nums.size() - 1;
        int mid = 0;

        while (left <= right)
        {
            if (nums[left] < nums[right])
            {
                res = min(res, nums[left]);
                break;
            }
            mid = (left + right) / 2;
            res = min(res, nums[mid]);
            if (nums[mid] >= nums[left])
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        return res;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    cout << s.findMin(nums) << endl;
    return 0;
}