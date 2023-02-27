#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

bool isIsomorphic(string s, string t)
{
    if (s.length() != t.length())
    {
        return false;
    }
    unordered_map<char, char> mapST, mapTS;
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        if ((mapST.find(s[i]) != mapST.end() && mapST[s[i]] != t[i]) || (mapTS.find(t[i]) != mapTS.end() && mapTS[t[i]] != s[i]))
        {
            return false;
        }

        mapST[s[i]] = t[i];
        mapTS[t[i]] = s[i];
    }
    return true;
}

int main()
{
    string s = "egg";
    string t = "add";
    cout << isIsomorphic(s, t) << endl;
    return 0;
}
