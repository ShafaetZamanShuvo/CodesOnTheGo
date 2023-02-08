#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int left, right, mid;
    left = 0;
    right = n-1;
    while(left <= right)
    {
        mid = (left+right)/2;
        if(key == arr[mid])
        {
            return mid;
        }
        if(key < arr[mid])
        {
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }

    return -1;
}

int main()
{
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 11;
    int pos = binarySearch(arr, n, key);
    if(pos == -1)
    {
        cout<<"Element not found";
    }
    else
    {
        cout<<"Element found at position "<<pos;
    }
}