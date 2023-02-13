/*
Write an algorithm to determine if a number n is happy.

A happy number is a number defined by the following process:

Starting with any positive integer, replace the number by the sum of the squares of its digits.
Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
Those numbers for which this process ends in 1 are happy.
Return true if n is a happy number, and false if not.



Example 1:

Input: n = 19
Output: true
Explanation:
1^2 + 9^2 = 82
8^2 + 2^2 = 68
6^2 + 8^2 = 100
1^2 + 0^2 + 0^2 = 1
Example 2:

Input: n = 2
Output: false
*/

#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    bool isHappy(int n)
    {
       int sum = 0;
         int temp = n;
            while(1)
            {
                sum = 0;
                while(temp != 0)
                {
                    int a = temp / 10;
                    int b = temp % 10;
                    temp = a;
                    sum += b * b;
                }
                if(sum == 1)
                    return true;
                else if(sum == 4)
                    return false;
                else
                    temp = sum;
            }
    }
};

int main()
{
    Solution s;
    cout << s.isHappy(19) << endl;
    return 0;
}