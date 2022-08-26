#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        long long int tmp = 0, ans = 0, n = cardPoints.size();
        for(int i = 0; i < k; i++)tmp += cardPoints[i];
        ans = max(ans, tmp);
        for(int i = k-1; i >= 0; i--){
            tmp -= cardPoints[i];
            tmp += cardPoints[n-k+i];
            ans = max(ans, tmp);
        }
        return ans;
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

// Time Complexity: O(n)
// Space Complexity: O(1)

//I just need to understand the problem better.
//I think the problem is that we need to find the maximum score of the subarray of size k.
//We can do this by finding the maximum score of the subarray of size k 
//Then we splice the first element of the array and the last element of the array and do the same thing again.
// we always compare if the sum is maximum or not.
//we take the maximum of the sum and return it.
