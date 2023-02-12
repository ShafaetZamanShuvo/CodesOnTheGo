#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    vector<int> countBits(int n)
    {
        int sum = 0;
        int vagsesh, vagfol;
        vector<int> res;
        int num;
        for (int i = 0; i <= n; i++)
        {
            num = i;
            vagfol = -1;
            while (vagfol != 0)
            {
               
                vagfol = num / 2;
                vagsesh = num % 2;
                if (vagsesh)
                {
                    sum++;
        

                }
                num = vagfol;
            }
            
            res.push_back(sum);
            sum = 0;
        }

        return res;
    }
};

int main()
{
    Solution s;
    vector<int> nums = s.countBits(5);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}