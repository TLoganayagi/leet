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
    int getDecimalValue(ListNode* head) {
        ListNode* cur=head;
        string s="";
        while(cur!=NULL)
        {
            s+=cur->val+'0';
            cur=cur->next;
        }
        int x=stoi(s,0,2);
        return x;
    }
};