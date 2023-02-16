#include<iostream>
#include<vector>
using namespace  std;


class Solution {
public:

    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int row = matrix.size();
        if (row == 0) return false;
        int col = matrix[0].size();
        if (col == 0) return false;
        
        for(int i = 0; i<row; i++)
        {
        
                if(target>matrix[i][col-1])
                {
                    continue;
                }       
                else 
                {
                    int left = 0;
                    int right = col-1;

                    while(left<=right)
                    {
                        int mid = left + (right - left) / 2;
                        cout << "mid " << mid << endl;
                        if(matrix[i][mid] == target)
                        {
                            return 1;
                        }
                        if(target < matrix[i][mid])
                        {
                            right = mid-1;
                        }
                        else{
                            left = mid+1;
                        }
                    }
                }
        }

        return 0;
     
    }
};

int main()
{
    Solution s;
    vector<vector<int>> matrix = {
       {1,  3,  5,  7},
       {10, 11, 16, 20},
       {23, 30, 34, 50}
    };
    int target = 3;
    cout << s.searchMatrix(matrix, target) << endl;
    return 0;
}