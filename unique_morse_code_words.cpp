#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {

        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        vector<char> alphabets = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

        //create a mapping of alphabets to morse code
        unordered_map<char, string> mp;
        for(int i=0; i<alphabets.size(); i++){
            mp[alphabets[i]] = morse[i];
        }

        //convert each word to morse code
        vector<string> morse_words;
        unordered_set<string> s; //to store unique morse words
        for(int i=0; i<words.size(); i++){
            string word = words[i];
            string morse_word = "";
            for(int j=0; j<word.size(); j++){
                morse_word += mp[word[j]];
            }
            morse_words.push_back(morse_word);
            s.insert(morse_word);
        }

        return s.size();
        
    }
};

int main()
{
    Solution s;
    vector<string> words = {"gin", "zen", "gig", "msg"};
    cout << s.uniqueMorseRepresentations(words) << endl;
    return 0;
}