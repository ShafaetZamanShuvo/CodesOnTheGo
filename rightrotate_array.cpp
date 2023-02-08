#include <iostream>
using namespace std;

int *rotateRight(int arr[], int pos, int n)
{
    int *temp = new int[n];

    for (int i = 0; i < n; i++)
    {
        temp[i] = 0;
    }
    cout << endl;
    int new_pos = 0;
    for (int i = 0; i < n; i++)
    {
        temp[i] = arr[(i+pos)%n];
        cout << temp[i] << " ";
    }

    return temp;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    rotateRight(arr, 2, n);

    return 0;
}