#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isIdealPermutation(vector<int> &nums)
    {
        int n = nums.size();
        int mx = -1;
        for(int i = 0; i<n-2; i++)
        {
            mx= max(mx,nums[i]);
            if(mx>nums[i+2])
            {
                return false;
            }
            
        }

        return true;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1,2,0};
    cout << s.isIdealPermutation(nums) << endl;

    return 0;
}

//all local inversions are global inversions,
//but not all global inversions are local
//if we see a global inversion, that is not local, then return false
// that means in 1,2,0  for 1, their is global inversion, but not local, so it will not be true
