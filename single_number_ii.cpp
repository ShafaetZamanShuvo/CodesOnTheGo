#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //create a map
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto i:m){
            if(i.second==1){
                return i.first;
            }
        }

        return 0;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {2,2,3,2};
    cout << s.singleNumber(nums) << endl;
    return 0;
}