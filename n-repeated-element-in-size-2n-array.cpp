#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i = 0; i< nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto i : mp)
        {
            if(i.second>1)
            {
                return i.first;
            }
        }
        
        return 0;
        
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1,2,3,3};
    cout<<s.repeatedNTimes(nums);
    return 0;
}