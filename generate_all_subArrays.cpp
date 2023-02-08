#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> subString(string s)
{
    vector<string> res;
    string sub_str;
    for (int i = 0; i < s.length(); i++)
    {
        sub_str = "";
        for (int j = i; j < s.length(); j++)
        {
            sub_str += s[j];
            res.push_back(sub_str);
        }
    }
    return res;
}

// now write a function that creates all the subarrays of a given array

void subArray(int arr[], int n)
{
    vector<vector<int> > res;
    vector<int> sub_arr;
    for (int i = 0; i < n; i++)
    {
        sub_arr.clear();
        for (int j = i; j < n; j++)
        {
            sub_arr.push_back(arr[j]);
            for (int k = 0; k < sub_arr.size(); k++)
            {
                cout << sub_arr[k] << " ";
            }
            cout << endl;
        }
        // print the subarray

        cout << endl;
    }
}

int main()
{
    string s = "abcde";
    vector<string> res = subString(s);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << endl;
    }

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    subArray(arr, n);
}