#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> minOperations(string boxes) {

        int n = boxes.size();
        vector<int> result(n,0);
        int steps = 0;

        for(int i =0; i< n; i++)
        {
            steps = 0;
            for(int j = 0; j<n; j++)
            {
                if(i == j)
                {
                    steps = steps;
                }
                if(boxes[j] == '1')
                {
                    steps = steps+ abs(i - j);
                }

            }

            result[i] = steps;
        }

        return result;
        
        
    }
};

int main()
{
    Solution s;
    string boxes = "001011";
    vector<int> result = s.minOperations(boxes);
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}