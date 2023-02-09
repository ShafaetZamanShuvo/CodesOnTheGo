#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int* prefix_product = new int[nums.size()];
        int* suffix_product = new int[nums.size()];
        vector<int> result;
        prefix_product[0]=nums[0];
        int temp = nums[0];
        for(int i = 1; i< nums.size(); i++ )
        {
            temp = temp * nums[i];
            prefix_product[i]=temp;
        }

        temp = nums[nums.size()-1];
        suffix_product[nums.size()-1] = temp;
        for(int i = nums.size()-2; i>=0; i--)
        {
            temp = temp * nums[i];
            suffix_product[i] = temp;
        }

        for(int i = 0; i< nums.size(); i++)
        {
            if(i==0)
            {
                result.push_back(suffix_product[i+1]);
            }
            else if(i==nums.size()-1)
            {
                result.push_back(prefix_product[i-1]);
            }
            else
            {
                result.push_back(prefix_product[i-1]*suffix_product[i+1]);
            }
        }

        return result;

    }
};

int main()
{
    Solution s;
    vector<int> nums = {1,2,3,4};
    vector<int> result =  s.productExceptSelf(nums);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}