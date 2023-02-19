#include<iostream>
#include<vector>
using namespace std;
 class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        vector<vector<int>> zeros;
        int mat_row_size = matrix.size();
        int mat_col_size = matrix[0].size();
        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = 0; j < matrix[i].size(); j++)
            {
                if(matrix[i][j] == 0)
                {
                    vector<int> v = {i,j};
                    zeros.push_back(v);
                }
            }
        }

        for(int i = 0; i<zeros.size(); i++)
        {
            int row = zeros[i][0];
            int col = zeros[i][1];
            for(int j = 0; j<mat_col_size; j++)
            {
                matrix[row][j] = 0;
            }
            for(int j = 0; j<mat_row_size; j++)
            {
                matrix[j][col] = 0;
            }
        }


        
    }
};

int main()
{
    Solution s;
    vector<vector<int>> v = {{1,1,1},{1,0,1},{1,1,1}};
    s.setZeroes(v);
    for(int i = 0; i < v.size(); i++)
    {
        for(int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}