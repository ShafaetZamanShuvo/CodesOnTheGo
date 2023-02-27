#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


 // Definition for singly-linked list.
 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        vector <ListNode*> v;
        ListNode *temp = head;
        while(temp!= NULL)
        {
            v.push_back(temp);
            temp = temp->next;
        }

        int i = left - 1;
        int j = right - 1;
        
        while(i < j)
        {
            swap(v[i], v[j]);
            i++;
            j--;
        }

        for (int i = 0; i < v.size() - 1; i++)
        {
            v[i]->next = v[i + 1];
        }

        v[v.size() - 1]->next = NULL;

        return v[0];
        
    }
};

int main()
{
    Solution s;
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    ListNode *result =  s.reverseBetween(head, 2, 4);

    while(result!= NULL)
    {
        cout<<result->val<<" ";
        result = result->next;
    }


    return 0;
}