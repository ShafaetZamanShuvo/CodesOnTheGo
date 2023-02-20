#include<iostream>
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode * temp = head;
        while(temp!=NULL)
        {
            count++;
            temp = temp->next;    
        }

        int deletePosition = count - n;

        if(deletePosition == 0)
        {
            head = head->next;
            return head;
        }
        
        ListNode * prev = NULL;
        ListNode * curr = head;

        for(int i = 0; i< deletePosition; i++)
        {
            prev = curr;
            curr = curr->next;
        }

        if(prev) cout << "Prev : " << prev->val << endl;
        if(curr) cout << "Curr : " << curr->val << endl;

        if(curr->next)
        prev->next = curr->next;
        else
        prev->next = NULL;

        return head;
    }
};

int main()
{
    ListNode * head = new ListNode(1);
    ListNode * temp = head;
    for(int i = 2; i < 6; i++)
    {
        temp->next = new ListNode(i);
        temp = temp->next;
    }
    Solution s;
    s.removeNthFromEnd(head, 2);
    //print the list

    ListNode * temp1 = head;

    while(temp1!=NULL)
    {
        cout << temp1->val << " ";
        temp1 = temp1->next;
    }

    return 0;
}