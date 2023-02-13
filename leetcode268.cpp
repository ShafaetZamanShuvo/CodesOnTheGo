#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int totalSum = (n + 1) * n / 2;
        int sum = 0;
        for(int i = 0; i < n; i++)
            sum += nums[i];

        return totalSum - sum;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {0,1,3};
    cout << s.missingNumber(nums) << endl;
    return 0;
}