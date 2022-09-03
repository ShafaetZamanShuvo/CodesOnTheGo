#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minCostToMoveChips(vector<int> &position)
    {
        int n = position.size();
        int even = 0;
        int odd = 0;

        for (int i = 0; i < n; i++)
        {
            if (position[i] % 2 == 0)
            {
                even++;
            }
            else
                odd++;
        }

        if (even < odd)
        {
            return even;
        }
        else
            return odd;
    }
};

int main()
{
    Solution s;
    vector<int> position = {1, 2, 3};
    int result = s.minCostToMoveChips(position);
    cout << result << endl;

    return 0;
}