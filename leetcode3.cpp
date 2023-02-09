#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

// O(n^3)

// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {

//         vector<string> result;

//         for(int i = 0; i< s.length(); i++)
//         {
//             string temp_string ="";
//             for(int j = i; j<s.length(); j++)
//             {
//                 temp_string += s[j];
//                 result.push_back(temp_string);
//             }
//         }

//         //find the longest substring

//         int max = 0;
//         for (int i = 0; i < result.size(); i++) {
//             unordered_map<char, int> mp;
//             for (int j = 0; j < result[i].length(); j++) {
//                     mp[result[i][j]]++;
//                     if(mp[result[i][j]] > 1)
//                         break;
//             }
//             if (mp.size() > max) {
//                 max = mp.size();
//                 // cout << result[i] << endl;
//             }
//         }
//         return max;
//     }
// };

// O(n)
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        // using sliding window technique

        int left = 0;
        int max = 0;
        unordered_set<char> charSet;
        for (int right = 0; right < s.length(); right++)
        {
            //while the set contains the character
            while (charSet.find(s[right]) != charSet.end())
            {
                charSet.erase(s[left]);
                left++;
            }
            charSet.insert(s[right]);
            if (charSet.size() > max)
                max = charSet.size();
        }
        return max;

    }
};

int main()
{
    Solution s;
    cout << s.lengthOfLongestSubstring("abcabcbb") << endl;
    cout << s.lengthOfLongestSubstring("bbbbb") << endl;
    cout << s.lengthOfLongestSubstring("pwwkew") << endl;
    return 0;
}
