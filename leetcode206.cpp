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
    ListNode* reverseList(ListNode* head) {
        ListNode * prev = NULL;
        ListNode * curr = head;
        ListNode * next = NULL;
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;

    }
};

int main(){
    ListNode * head = new ListNode(1);
    ListNode * second = new ListNode(2);
    // ListNode * third = new ListNode(3);
    // ListNode * fourth = new ListNode(4);
    // ListNode * fifth = new ListNode(5);
    head->next = second;
    second->next = NULL;
    // third->next = fourth;
    // fourth->next = fifth;
    // fifth->next = NULL;
    Solution s;
    ListNode* ans= s.reverseList(head);
    //print
    ListNode * temp = ans;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    return 0;
}