#include<iostream>
using namespace std;
class Solution {
public:
    double myPow(double x, int n) {
        double temp;
        if(n == 0){
            return 1;
        }
        temp = myPow(x, n/2);
        if( n % 2 == 0)
        {
            return temp*temp;
        }
        else{
            if(n>0)
            {
                return x * temp * temp;
            }
            else{
                return (temp * temp)/x;
            }
        }
        
    }
};

int main()
{
    Solution s;
    double x = 2.00000;
    int n = 10;
    cout << s.myPow(x, n) << endl;
    return 0;

}