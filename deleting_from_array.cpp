#include<iostream>
using namespace std;

int deleteElement(int arr[], int n, int key)
{
    int pos = -1;
    for(int i = 0; i<n; i++)
    {
        if(arr[i] == key)
        {
            pos = i;
            break;
        }
    }
    if(pos == -1)
    {
        return -1;
    }
    //left shift all the elements from pos
    for(int i = pos ; i<n; i++)
    {
        arr[i] = arr[i+1];
    }

    return n-1;
}

int main()
{
    int i;
    int arr[] = { 10, 50, 30, 40, 20 };
 
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;
 
    cout << "Array before deletion\n";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
     
   
      // Function call
    n = deleteElement(arr, n, key);
 
    cout << "\n\nArray after deletion\n";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
 
    return 0;
}