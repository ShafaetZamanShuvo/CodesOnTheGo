#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string multiply(string num1, string num2)
    {
        int sum1 = 0;
        for (int i = 0; i < num1.length(); i++)
        {
            sum1 = sum1 * 10 + num1[i] - 48;
        }

        cout << sum1 << endl;
        int sum2 = 0;
        for (int i = 0; i < num2.length(); i++)
        {
            sum2 = sum2 * 10 + num2[i] - 48;
        }

        cout << sum2 << endl;

        int mul = sum1 * sum2;
        string ans = to_string(mul);
        return ans;
    }
};

int main()
{
    Solution s;
    string num1 = "123";
    string num2 = "456";
    s.multiply(num1, num2);
    return 0;
}