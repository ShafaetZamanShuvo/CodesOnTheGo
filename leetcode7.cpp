#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        int a, b;
        vector<int> res;
        int temp, flag = 0;
        if (x > 0)
        {
            temp = x;
        }
        else
        {
            temp = -x;
            flag = 1;
        }
        while (temp != 0)
        {
            a = temp / 10;
            b = temp % 10;
            temp = a;
                res.push_back(b);
        }
        for(int i = 0; i < res.size(); i++)
        {
           cout << res[i] << endl;
        }
        int sum = 0;
        for(int i = 0; i < res.size(); i++)
        {
            sum = sum * 10 + res[i];
        }
        if(flag == 1)
            sum = -sum;

        return sum;
    }
};

int main()
{
    Solution s;
    cout << s.reverse(109000) << endl;
    return 0;
}