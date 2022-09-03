#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPrefixString(string s, vector<string> &words)
    {

        int s_size = s.size();
        int str_size = s.size();
        cout << "string size: " << s_size << endl;
        int words_size = words.size();

        int words_length = 0;

        vector<string> prefix;

        for (int i = 0; i < words_size; i++)
        {
            int words_i_size = words[i].size();
            words_length += words_i_size;
            // now split the string according to words[i] size and push them to prefix vector
            string temp = s.substr(0, words_i_size);
            prefix.push_back(temp);
            s = s.substr(temp.size(), s_size);
            s_size -= temp.size();
        }

        for (int i = 0; i < prefix.size(); i++)
        {
            cout << prefix[i] << endl;
        }

        cout << "words length: " << words_length << endl;

        if(words_length < str_size){

            cout << "words length is less than s size" << endl;
            return false;
        }
        

        // if prefix has any empty string less the prefix size

        int prefix_size = prefix.size();
        int count = 0;
        for (int i = 0; i < prefix_size; i++)
        {
            if (prefix[i] == "")
            {
                count++;
            }
        }

        prefix_size -= count;

        // mow linear check with the prefix and words vector upto prefix size

        for (int i = 0; i < prefix_size; i++)
        {
            if (prefix[i] != words[i])
            {
                cout << "false" << endl;
                return false;
            }
        }

        cout << "true" << endl;
        return true;
    }
};

int main()
{
    Solution s;
    string s1 = "ileetcode";
    vector<string> words = {"i", "love", "leetcode", "apples"};
    s.isPrefixString(s1, words);
    return 0;
}