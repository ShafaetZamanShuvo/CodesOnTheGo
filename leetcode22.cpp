#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
void generateParenthesis(int n, int open, int close, string s, vector<string> &v)
{
    if (open == n && close == n)
    {
        v.push_back(s);
        return;
    }

    if (open < n)
    {
        generateParenthesis(n, open + 1, close, s + "(", v);
    }

    if (close < open)
    {
        generateParenthesis(n, open, close + 1, s + ")", v);
    }

}

    vector<string> generateParenthesis(int n) {
    vector<string> v;
    int open = 0, close = 0;
    string s = ""; 
    generateParenthesis(n, open, close, s, v);
    return v;       
        
    }
};

int main()
{

    Solution s;
    vector<string> v = s.generateParenthesis(3);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    
}