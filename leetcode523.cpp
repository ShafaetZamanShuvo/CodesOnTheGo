#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkSubarraySum(vector<int> &nums, int k)
    {

        vector<int> prefix_sum;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum = (sum + nums[i])%k;
            prefix_sum.push_back(sum);
        }

        for(int i=0;i<prefix_sum.size();i++){
            if(prefix_sum[i]==0){
                return true;

            }
        }
         
        return false;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {23, 2, 4, 6, 7};
    int k = 6;
    s.checkSubarraySum(nums, k);
}