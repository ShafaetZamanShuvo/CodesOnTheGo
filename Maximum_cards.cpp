#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int maxScore(vector<int> &cardPoints, int k)
{
    int count = k;
    int max_score = 0;
    int size = cardPoints.size();
    for (int i = 0; i <= count; i++)
    {
        int curr = i;
        int remaining = count - curr;

        int sum = 0;

        for (int j = 0; j < curr; j++)
        {
            sum += cardPoints[j];
        }
        for (int l = size - 1; l > size - remaining - 1; l--)
        {
            sum += cardPoints[l];
        }
    

        if (sum > max_score)
        {
            max_score = sum;
        }
    }

    return max_score;
}
};

int main()
{
    Solution s;
    vector<int> cardPoints = {1, 2, 3, 4, 5, 6, 1};
    int k = 3;
    cout << s.maxScore(cardPoints, k) << endl;
    return 0;
}