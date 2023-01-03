#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        for (int i = 0; i < 9; i++)
        {
            unordered_map<char, int> mp;
            for (int j = 0; j < 9; j++)
            {
                // 1st test row wise
                if (board[i][j] != '.')
                {
                    mp[board[i][j]]++;
                }
                // cout << board[i][j] << " ";
            }
            if(mp.size() == 0)
            {
                return false;
            }
            for (auto it : mp)
            {
                if (it.second > 1 || (mp.size() == 0))
                {
                    cout << "here"<<endl;
                    return false;
                }
            }
            mp.clear();
        }
        // 2nd test column_wise
        for (int i = 0; i < 9; i++)
        {
            unordered_map<char, int> mp;
            for (int j = 0; j < 9; j++)
            {
                if (board[j][i] != '.')
                {
                    mp[board[j][i]]++;
                }
                // cout << board [j][i] << " ";
            }
            // cout<< endl;
            if (mp.size() == 0)
            {
                return false;
            }
            for (auto it : mp)
            {
                if (it.second > 1 || (mp.size() == 0))
                {
                    return false;
                }
            }
            mp.clear();
        }

        // 3rd test room_wise

        int row = 0;
        int col = 0;
        while (col <= 6)
        {
            while (row <= 6)
            {
                unordered_map<char, int> mp;
                for (int i = row; i < row + 3; i++)
                {

                    for (int j = col; j < col + 3; j++)
                    {
                        if (board[j][i] != '.')
                        {
                            mp[board[j][i]]++;
                        }
                    }
                }
                if (mp.size() == 0)
                {
                    return false;
                }

                for (auto it : mp)
                {
                    if (it.second > 1 || (mp.size() == 0))
                    {
                        return false;
                    }
                }
                mp.clear();

                row = row + 3;
            }
            row = 0;
            col += 3;
        }

        return true;
    }
};

int main()
{
    Solution s;
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.'}};
    cout << s.isValidSudoku(board) << endl;
}