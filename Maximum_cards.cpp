#include<bits/stdc++.h>
using namespace std;
int maxScore(vector<int>& cardPoints, int k){
    int count = 0;
    int max_score = 0;
    int size = cardPoints.size();
    for(int i = 0; count<k; )
    {
        if(count < k)
        {
        if(cardPoints[i] == cardPoints[size - 1 -i])
        {
            max_score += cardPoints[i];
            cout <<endl<< 1 << " "<< cardPoints[i] << endl;
            cardPoints.erase(cardPoints.begin()+size -i -1);
            size--;
            count++;
            for(int j = 0; j< cardPoints.size(); j++)
            {
              cout << cardPoints[j] << " ";
            }
            
        }
         else if(cardPoints[i]> cardPoints[size - 1 - i])
        {
            max_score+= cardPoints[i];
            cout <<endl<< 2 << " "<< cardPoints[i] << endl;
            cardPoints.erase(cardPoints.begin()+i);
            size--;
            count++;
            for(int j = 0; j<cardPoints.size(); j++)
            {
                cout << cardPoints[j] << " ";
            }
            
        }
        else if(cardPoints[i] < cardPoints[size - 1 - i])
        {
            max_score += cardPoints[size - 1 - i];
            cout <<endl<< 3 << " "<< cardPoints[size - 1 - i] << endl;
            cardPoints.erase(cardPoints.begin()+(size - 1 - i));
            size--;
            count++;
            for(int j = 0; j< cardPoints.size(); j++)
            {
                cout << cardPoints[j] << " ";
            }
            
        }
        }

    }

    return max_score;
    
}
int main()
{
    vector<int> cardPoints = {11,49,100,20,86,29,72};
    int k = 4;
    cout <<maxScore(cardPoints,k)<<endl; 
    
}