// O(n*k) solution for finding maximum sum of
// a subarray of size k
#include <bits/stdc++.h>
using namespace std;

// Returns maximum sum in a subarray of size k.
int maxSum(int arr[], int n, int k)
{
	// Initialize result
	int max_sum = INT_MIN;

	// Consider all blocks starting with i.
	for (int i = 0; i < n - k + 1; i++) {
		int current_sum = 0;
		for (int j = 0; j < k; j++)
			current_sum = current_sum + arr[i + j];

		// Update result if required.
		max_sum = max(current_sum, max_sum);
	}

	return max_sum;
}

//O(n) solution for finding maximum sum of a subarray of size k
int maxSum(int arr[], int n, int k)
{
    // k must be greater
    if (n < k) {
        cout << "Invalid";
        return -1;
    }

    // Compute sum of first window of size k
    int max_sum = 0;
    for (int i = 0; i < k; i++)
        max_sum += arr[i];

    // Compute sums of remaining windows by
    // removing first element of previous
    // window and adding last element of
    // current window.
    int window_sum = max_sum;
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];
        max_sum = max(max_sum, window_sum);
    }

    return max_sum;
}

// Driver code
int main()
{
	int arr[] = { 1, 4, 2, 10, 2, 3, 1, 0, 20 };
	int k = 4;
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << maxSum(arr, n, k);
	return 0;
}

// This code is contributed by Aditya Kumar (adityakumar129)

