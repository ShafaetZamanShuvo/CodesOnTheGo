#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isCovered(vector<vector<int>> &ranges, int left, int right)
    {
       int n = ranges.size();
       for(int i = left; i <= right; i++){
        int flag = 0;
            for(int j = 0; j< n; j++)
            {
                if(i>= ranges[j][0] && i<= ranges[j][1])
                {
                    flag = 1;
                    break;
                }
            }
            if(!flag)
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
    vector<vector<int>> ranges = {{1,50}};
    int left = 1;
    int right = 50;
    auto ans = s.isCovered(ranges, left, right);
    if (ans)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}