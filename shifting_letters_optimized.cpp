#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string shiftingLetters(string s, vector<int> &shifts)
    {
        int n = shifts.size();
        int sum = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            sum = sum + shifts[i]%26;
            shifts[i] = sum;
        }
        for (int i = 0; i < shifts.size(); i++)
        {
            s[i] = 'a' + (26 + (s[i] - 'a') + shifts.at(i) % 26) % 26;
        }
        return s;
    }
};

int main()
{
    Solution s;
    string s1 = "bad";
    vector<int> shifts = {10, 20, 30};
    cout << s.shiftingLetters(s1, shifts) << endl;
    return 0;
}
