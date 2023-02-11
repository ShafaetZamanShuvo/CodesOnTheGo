#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> res;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                //push back its lower case
                res.push_back(s[i]);
            } else if (s[i] >= 'A' && s[i] <= 'Z') {
                //push back its lower case
                res.push_back(s[i] - 'A' + 'a');
            } 
        }

        int i = 0;
        int j = res.size() - 1;
        while (i < j) {
            if (res[i] != res[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};

int main()
{
    Solution s;
    string str  = "A man, a plan, a canal: Panama";
    cout << s.isPalindrome(str) << endl;

}