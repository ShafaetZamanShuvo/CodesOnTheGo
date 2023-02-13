#include<iostream>
using namespace std;

class Solution {
public:
    int getSum(int a, int b) {

        int num1 = a;
        int num2 = b;
        while(1)
        {
            int sum = num1 ^ num2;
            int carry = (num1 & num2) << 1;
            if(carry == 0)
                return sum;
            num1 = sum;
            num2 = carry;

        }
        
    }
};

int main()
{
    Solution s;
    cout << s.getSum(1, 2) << endl;
    return 0;

}