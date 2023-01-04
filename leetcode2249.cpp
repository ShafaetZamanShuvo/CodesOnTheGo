#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countLatticePoints(vector<vector<int>>& circles) {
        int n = circles.size();
        set<pair<int,int>> cnt;
        for(int i = 0; i< n; i++)
        {
            int center_x , center_y, radius;
            center_x = circles[i][0];
            center_y = circles[i][1];
            radius = circles[i][2];

            for(int x = -radius; x<= (radius) ; x++)
            {
                for(int y = -radius; y<= (radius) ; y++)
                {
                    if(x*x + y*y <= radius*radius)
                    {
                        cnt.insert({x+center_x,y+center_y});
                    }
                }
            } 
        }
        int ans = cnt.size();
        return ans;
        
    }
};

int main()
{
    Solution s;
    vector<vector<int>> circles = {{2,2,2},{3,4,1}};
    cout<<s.countLatticePoints(circles);

}