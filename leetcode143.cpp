#include<iostream>
#include<vector>
using namespace std;
class ListNode {
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode *temp = head;
        int count = 0;
        while(temp!= NULL)
        {
            count++;
            cout << temp->val << endl;
            temp = temp->next;   
        } 

        cout <<"count :"<<count<<endl;
        vector<int> vals(count,0);
        vector<int> reordered_vals(count, 0);
        temp = head;
        int i = 0;
        while(temp!= NULL)
        {
            vals[i] = temp->val;
            i++;
            temp = temp->next;   
        }
        reordered_vals[0] = vals[0];
        int front = 1;
        int back = count - 1;
        for(int i = 1; i<count; i++)
        {
            if(i%2 == 1)
            {
                reordered_vals[i] = vals[back];
                back--;
            }
            else{
                reordered_vals[i] = vals[front];
                front++;
            }
        }

        //print out the vector
        for(int i = 0; i<count; i++)
        {
            cout << reordered_vals[i] << endl;
        }

        temp = head;
        i = 0;
        while(temp!= NULL)
        {
            temp->val = reordered_vals[i];
            i++;
            temp = temp->next;   
        }

        





        
    }
};

int main()
{
    Solution s;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    s.reorderList(head);
    return 0;
}

