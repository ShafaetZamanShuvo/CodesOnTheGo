#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int beautySum(string s)
    {
        int count = 0;
        vector <string> sub_str = subString(s);
        
        for(int i = 0; i< sub_str.size(); i++)
        {
            if(sub_str[i].length()>2)
            {
                
                if(countBeauty(sub_str[i]))
                {
                    count++;
                }
            }
        }
        
        return count;

    }

    bool countBeauty(string s)
    {
    
        unordered_map <char, int> umap;
        cout << s <<endl;

        string str = s;

        for(int i = 0; i< s.length(); i++)
        {
            
            umap[str[i]]++;
        }

        vector<int> frequency;
      //  cout << "frequency ";

        for(auto it: umap)
        {
            frequency.push_back(it.second);
           // cout <<it.first<< " "<< it.second<< " ";

        }
       // cout << endl;



        int min = 999, max = 0;

        for(int i = 0; i< frequency.size(); i++)
        {
            if(frequency[i]<min)
            {
                min = frequency[i];
            }
            if(frequency[i]>max)
            {
                max = frequency[i];
            }
        }

       // cout << "max " << max << " min "<<min << endl;

        if(max - min)
        {
            return true;
        }
        else
            return false;


    }

    vector<string> subString(string s)
    {
        vector <string> res;

        int size = s.length();
        string sub_str;
        for(int i = 0; i< size; i++)
        {
            sub_str = "";
            for(int j = i; j<size; j++)
            {
                sub_str += s[j];
                res.push_back(sub_str);
            }
        }

        return res;

    }
};

int main()
{
    Solution s;
    string str = "aabcbaa";
    cout << s.beautySum(str);
}