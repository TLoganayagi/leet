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
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy=new ListNode(0,head);
        ListNode* prev=dummy;
        ListNode* cur=head;
        while(cur!=NULL)
        {
            if(cur->next != nullptr && cur->val == cur->next->val)
            {
                int dup=cur->val;
                while(cur!=NULL && cur->val==dup)
                {
                    ListNode* temp=cur;
                    cur=cur->next;
                    delete temp;
                }
                prev->next=cur;
            }
            else
            {
                prev=cur;
                cur=cur->next;
            }
        }
        return dummy->next;
    }
};