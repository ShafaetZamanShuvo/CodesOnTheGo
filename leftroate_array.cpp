#include <iostream>
using namespace std;

int *rotateleft(int arr[], int pos, int n)
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
        if ((i - pos) >= 0)
        {
            new_pos = i - pos;
        }
        else
        {
            new_pos = n + i - pos;
        }
        temp[i] = arr[new_pos];
        cout << temp[i] << " ";
    }

    return temp;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    rotateleft(arr, 2, n);

    return 0;
}