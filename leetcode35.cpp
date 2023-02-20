#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {

        int left = 0;
        int right = nums.size() - 1;
        int mid = 0;
        if (target > nums[right])
            return right + 1;
        if (target < nums[left])
            return 0;

        while (left <= right)
        {
            mid = (left + right) / 2;
            cout << "left : " << left << " right =" << right << endl;
            if (left >= 0 && right <= nums.size() - 2)
            {
                if (right == left && nums[right + 1] > target && nums[left] < target)
                {
                   
                    return left + 1;
                }
            }

            if (nums[mid] == target)
            {cout << " found here" << endl;
                return mid;
            }
            else if (nums[mid] < target)
            {
                left = mid + 1;
            }
            else
            {

                right = mid - 1;
            }
        }

        return -1;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1};
    int target = 1;
    cout << s.searchInsert(nums, target) << endl;
    return 0;
}