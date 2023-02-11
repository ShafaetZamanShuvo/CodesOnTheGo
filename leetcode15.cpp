#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target, int i) {
        int j = numbers.size() - 1;
        vector<int> res;
        while (i < j) {
            if (numbers[i] + numbers[j] == target) {
                res.push_back(numbers[i]);
                res.push_back(numbers[j]);
                break;
            } else if (numbers[i] + numbers[j] < target) {
                i++;
            } else {
                j--;
            }
        }
        return res;
    }

    vector<vector<int> > threeSum(vector<int>& nums) {
        vector<vector<int> > res;
        unordered_set<vector<int> >  mp;
        if(nums.size()<3)
        {
            return res;
        }
        //sort nums
        sort(nums.begin(), nums.end());
        for(int i = 0; i< nums.size(); i++)
        {
            //fix the ith number and find the other two numbers so that their summation = 0
            int target = 0 - nums[i];
            vector<int> temp;
            //find the two numbers that sum up to target
            temp = twoSum(nums, target, i+1);
            if(temp.size() == 2)
            {
                int a = nums[i];
                int b = temp[0];
                int c = temp[1];
                mp.insert({a, b, c});
            }
            temp.clear();
        }

        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            res.push_back(*it);
        }

        return res;
    }
};

int main()
{
    Solution s;

    vector<int> nums;
    nums.push_back(-1);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(-1);
    nums.push_back(-4);

    vector<vector<int> > res = s.threeSum(nums);

    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}