#include<bits/stdc++.h>
using namespace std;

// Function to find the number of ways to choose a subset of size k from a set of size n
int nCr(int n, int k)
{
    int res = 1;
    if (k > n - k)
        k = n - k;
    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}





int main()
{
    // Number of Generals
    int n;
    cin >> n;
    // Number of Generals who are loyal
    int k;
    cin >> k;
    // Number of Generals who are traitors
    int t = n - k;
    // Number of Generals who are loyal and traitors
    int l = nCr(n, k);
    
    // Number of ways to choose a subset of size t from a set of size l
    int ways = nCr(l, t);
    cout << ways << endl;
    return 0;

    
}