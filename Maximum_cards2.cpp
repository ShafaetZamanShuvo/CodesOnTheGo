#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxScore(vector<int> &cardPoints, int k)
    {
        int sum = 0;
        int n = cardPoints.size();
        // find the sum of the array
        for (int i = 0; i < cardPoints.size(); i++)
        {
            sum = sum + cardPoints[i];
        }

        int min = 10000;
        int min_sum = 0;
        for(int j= 0; j<n-k; j++)
        {
            min_sum = min_sum+cardPoints[j];
        }

        if(min_sum<min)
        {
            min = min_sum;
        }

        for(int i = 1; ; i++)
        {
            if(k == 0)
            {
                break;
            }
         min_sum = min_sum - cardPoints[i-1];
         cout <<"Subtracting "<<cardPoints[i-1]<<" " <<min_sum << endl;
         min_sum = min_sum + cardPoints[n-k];
         cout << "Adding " << cardPoints[n-k] << " "<<min_sum<<endl;
         k--;
         if(min_sum<min)
         {
            min = min_sum;
            cout << "min = " << min << endl; 
         }
            
        }

        cout << "Total sum "<< sum << endl;
        cout << "min_sum" << min << endl;

        return sum-min;


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