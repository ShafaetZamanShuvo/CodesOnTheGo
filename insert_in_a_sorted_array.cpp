#include<iostream>
using namespace std;

int findPosition(int arr[], int key, int size)
{
    int index = -1;
    for(int i = 0; i<size; i++)
    {
        if(arr[i] == key)
        {
            return index;
        }
        if(arr[i]>key)
        {
            index = i;
            return index;
        }
    }
    return size+1;
}



int* insertSorted(int arr[], int key, int position, int size)
{

    int* res = new int[size+1];
    for(int i =0; i<size+1; i++)
    {
        res[i] = 0;
    }
    for(int i = 0; i<size+1; i++)
    {
        res[i] = arr[i];
    }
    for(int i = size; i>position; i--)
    {
        res[i] = res[i-1];
    }
    res[position] = key;

    return res;


}

//deleting from an sorted array means, 1st find the position by binary search
// then left shift all the element from pos+1

int main()
{
    int arr[] = { 1, 2, 4, 5, 6, 7, 8, 9, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << n << endl;
    int key = 3;
    int pos = findPosition(arr, key, n);
    cout << pos << endl;
    int *newArr = insertSorted(arr, key, pos, n);
    for(int i = 0; i<n+1; i++)
    {
        cout<<newArr[i]<<" ";
    }
    
}