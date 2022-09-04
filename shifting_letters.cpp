#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string shiftingLetters(string s, vector<int> &shifts)
    {

        string ans = s;
        for (int i = 0; i < shifts.size(); i++)
        {
            for (int j = 0; j <= i; j++)
            {
                if (ans[j] + shifts[i] > 122)
                {
                    ans[j] = 96 + ans[j] + shifts[i] - 122;
                }
                else
                    ans[j] = ans[j] + shifts[i];
            }
        }

        return ans;
    }
};

int main()
{
    Solution s;
    string s1 = "zaa";
    vector<int> shifts = {1, 27, 0};
    cout << s.shiftingLetters(s1, shifts) << endl;
    return 0;
}
