#include<iostream>
using namespace std;
class ListNode {
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL)
        {
            return NULL;
        }

        ListNode *ptr1= head;
        ListNode *ptr2 = head->next;

        while(ptr2 != NULL)
        {
            if(ptr1->val == ptr2->val)
            {
                ptr1->next = ptr2->next;
                ptr2 = ptr2->next;
            }
            else{
                ptr1 = ptr1->next;
                ptr2 = ptr2->next;
            }
            
        }

        return head;
        
    }
};

int main()
{
    Solution s;
    ListNode *head = new ListNode(1);
    ListNode *temp = head;
    temp->next = new ListNode(1);
    temp = temp->next;
    temp->next = new ListNode(2);
    temp = temp->next;
    temp->next = new ListNode(2);
    temp = temp->next;
    temp->next = new ListNode(3);
    temp = temp->next;
    temp->next = new ListNode(3);
    temp = temp->next;
    temp->next = new ListNode(4);
  
    

    ListNode *result = s.deleteDuplicates(head);
    while(result!= NULL)
    {
        cout << result->val << endl;
        result = result->next;
    }

}

