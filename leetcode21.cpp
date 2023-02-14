#include<iostream>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode *ptr1 = list1;
        ListNode *ptr2 = list2;
        ListNode* head = NULL;

        if(ptr1 == NULL) {
            return ptr2;
        }
        if(ptr2 == NULL)
        {
            return ptr1;
        }

        if(ptr1->val < ptr2->val)
        {
            head = ptr1;
            ptr1=ptr1->next;
        }
        else{
            head = ptr2;
            ptr2 = ptr2->next;
        }

        ListNode *ptr = head;

        while(ptr1!=NULL && ptr2!= NULL)
        {
            if(ptr1->val < ptr2->val)
            {
                ptr->next = ptr1;
                ptr1 = ptr1->next;
            }
            else{
                ptr->next = ptr2;
                ptr2 = ptr2->next;
            }
            ptr = ptr->next;
        } 

        if(ptr1 == NULL)
        {
            ptr->next = ptr2;
        }
        else{
            ptr->next = ptr1;
        }

        return head;
        
    }
};

int main(){
   // 1st list contains 1,2, 7,9,10
    ListNode* head1 = new ListNode(1);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(7);
    head1->next->next->next = new ListNode(9);
    head1->next->next->next->next = new ListNode(10);



    // 2nd list contains 1,3,4,5,11
    ListNode* head2 = new ListNode(1);
    head2->next = new ListNode(3);
    head2->next->next = new ListNode(4);
    head2->next->next->next = new ListNode(5);
    head2->next->next->next->next = new ListNode(11);

    Solution s;
    ListNode* head = s.mergeTwoLists(head1, head2);

    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }


    return 0;
    
}