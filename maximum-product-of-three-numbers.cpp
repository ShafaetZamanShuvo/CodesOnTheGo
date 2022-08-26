#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumProduct(vector<int> &nums)
    {

        // find the highest 3 numbers
        int negative = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < 0)
            {
                negative++;
            }
        }
        if (negative == 0 || negative == 1 || negative == nums.size())
        {
            int mx1 = -1001, mx1_pos = -1;
            int n = nums.size();
            for (int i = 0; i < n; i++)
            {
                mx1 = max(mx1, nums[i]);
                if (mx1 == nums[i])
                {
                    mx1_pos = i;
                }
            }
            int mx2 = -1001, mx2_pos = -1;
            for (int i = 0; i < n; i++)
            {
                if (i != mx1_pos)
                {
                    mx2 = max(mx2, nums[i]);
                    if (mx2 == nums[i])
                    {
                        mx2_pos = i;
                    }
                }
            }

            int mx3 = -1001;
            for (int i = 0; i < n; i++)
            {
                if (i != mx1_pos && i != mx2_pos)
                {
                    mx3 = max(mx3, nums[i]);
                }
            }

            return mx1 * mx2 * mx3;
        }

        if(negative>=2 && negative<nums.size())
        {
            //sort the array in ascending order

            int first_max = 0;
            sort(nums.begin(), nums.end());
            //find lowest 2 numbers
            int mn1 = nums[0];
            int mn2 = nums[1];
            //find highest number
            int mx = nums[nums.size()-1];

            first_max= mx*mn1*mn2;

            //another possibilty can be three highest numbers
            int second_max = 0;
            second_max = nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];

            return max(first_max, second_max);

        }

        return 0;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {-710,-107,-851,657,-14,-859,278,-182,-749,718,-640,127,-930,-462,694,969,143,309,904,-651,160,451,-159,-316,844,-60,611,-169,-73,721,-902,338,-20,-890,-819,-644,107,404,150,-219,459,-324,-385,-118,-307,993,202,-147,62,-94,-976,-329,689,870,532,-686,371,-850,-186,87,878,989,-822,-350,-948,-412,161,-88,-509,836,-207,-60,771,516,-287,-366,-512,509,904,-459,683,-563,-766,-837,-333,93,893,303,908,532,-206,990,280,826,-13,115,-732,525,-939,-787};
    cout << s.maximumProduct(nums) << endl;
    return 0;
}
