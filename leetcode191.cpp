#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int bit = 0;
        int sum = 0;
        while(n)
        {
            bit = n & 1;
            if(bit)
            {
                sum++;
            }
            n = n >> 1;
        }
        return sum;
        
    }
};

int main(){
    Solution s;
    cout << s.hammingWeight(00000000000000000000000000001011) << endl;
}