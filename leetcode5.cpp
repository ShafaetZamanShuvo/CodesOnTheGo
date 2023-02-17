#include <iostream>
#include <algorithm>
using namespace std;
class Solution
{
public:
    string longestPalindrome(string s)
    {
        if (s.length() == 0)
        {
            return "";
        }
        string ans = "";
        int left, right, max = 0;
        for (int i = 0; i < s.length(); i++)
        {
            // odd length
            left = i;
            right = i;
            while (left >= 0 && right < s.length() && s[left] == s[right])
            {
                if (right - left + 1 > max)
                {
                    max = right - left + 1;
                    ans = s.substr(left, max);
                }
                left--;
                right++;
            }
            left = i;
            right = i + 1;
            while (left >= 0 && right < s.length() && s[left] == s[right])
            {
                if (right - left + 1 > max)
                {
                    max = right - left + 1;
                    ans = s.substr(left, max);
                }
                left--;
                right++;
            }
        }

        return ans;
    }
};

int main()
{
    Solution s;
    string s1 = "cbbd";
    cout << s.longestPalindrome(s1) << endl;
}