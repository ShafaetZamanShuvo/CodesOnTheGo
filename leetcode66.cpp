#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int sum = 0;
        for(int i =0; i<digits.size(); i++)
        {
            sum = sum*10+ digits[i];
        }

        sum = sum+1;
        cout << sum << endl;
        vector<int> res;
        int a; int b; int temp = sum;
         while (temp != 0)
        {
            a = temp / 10;
            b = temp % 10;
            temp = a;
                res.push_back(b);
        }

        reverse(res.begin(), res.end());
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> digits = {1,2,3};
    vector<int> res = s.plusOne(digits);
    for(int i = 0; i < res.size(); i++)
    {
        cout << res[i] << endl;
    }
    return 0;
}