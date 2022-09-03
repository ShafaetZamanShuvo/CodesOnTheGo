#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countPrefixes(vector<string> &words, string s)
    {
        int words_size = words.size();
        int s_size = s.size();
        int prefix_count = 0;

        for (int i = 0; i < words_size; i++)
        {
            int count = 0;
            int words_i_size = words[i].size();
            string temp = words[i];
            cout << words[i] << endl;

            // now one to one check with the string s

            for (int j = 0; j < words_i_size; j++)
            {

                if (temp[j] == s[j])
                {
                    cout << "matched" << endl;
                    count++;
                }
                else
                {
                    cout << "not matched" << endl;
                    break;
                }
            }

            cout << "count: " << count << endl;
            if (count == words_i_size)
            {
                cout << "prefix found" << endl;
                prefix_count++;
            }
            else
            {
                cout << "prefix not found" << endl;
            }
        }

        cout << "prefix count: " << prefix_count << endl;
        return prefix_count;
    }
};

int main()
{
    Solution s;

    vector<string> words = {"a", "b", "c", "ab", "bc", "abc"};
    string s1 = "abc";
    s.countPrefixes(words, s1);
    return 0;
}