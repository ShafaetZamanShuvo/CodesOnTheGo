#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    bool hasCommonChar(string a, string b) {
        int n = a.size();
        int m = b.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i] == b[j]) {
                    return true;
                }
            }
        }
        return false;
    }

    int maxProduct(vector<string>& words) {

        int product = 0;
        int maxProduct = 0;

        for(int i = 0; i < words.size(); i++) {
            for(int j = i + 1; j < words.size(); j++) {
                product = words[i].length() * words[j].length();
                if(product > maxProduct) {
                    if(!hasCommonChar(words[i], words[j])) {
                        maxProduct = product;
                    }
                }
            }
        }

        return maxProduct;
        
    }
};

int main()
{
    Solution s;
    vector<string> words = {"abcw", "baz", "foo", "bar", "xtfn", "abcdef"};
    cout << s.maxProduct(words) << endl;
    return 0;

}