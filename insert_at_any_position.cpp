#include<iostream>
using namespace std;

void insertElement(int arr[], int n, int x, int pos)
{
    //we assume that there are spaces left enough to 
    //right shift all the elements starting from index 2

    for(int i = 5; i>2; i--)
    {
        arr[i] = arr[i-1];   
    }
    arr[pos] = x;
}


int main()
{
    int arr[15] = { 2, 4, 1, 8, 5 };
    int n = 5;
 
    cout<<"Before insertion : ";
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
 
    cout<<endl;
 
    int x = 10, pos = 2;
   
      // Function call
    insertElement(arr, n, x, pos);
    n++;
 
    cout<<"After insertion : ";
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
 
    return 0;
}