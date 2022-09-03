#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int n = nums.size();
        int count = 0;
        for(int i = 0; i< n; i++)
        {
            for(int j = 0; j<n; j++)
            {
                if(i == j)
                {
                    continue;
                }
                
                string temp;
                temp = nums[i]+nums[j];
                if(temp == target)
                {
                    count++;
                    cout << "The pair is " << i << " " << j << endl;
                }

            }
        }

        return count;
    }
};


int main()
{
    Solution s;
    // vector<string> nums = {"777","7","77","77"};
    vector<string> nums = {"123","4","12","34"};
    string target = "1234";
    // string target = "7777";
    cout << s.numOfPairs(nums, target) << endl;
    return 0;
}