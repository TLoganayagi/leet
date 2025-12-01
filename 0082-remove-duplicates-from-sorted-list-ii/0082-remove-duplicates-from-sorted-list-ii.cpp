class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head || !head->next) return head;

        ListNode* dummy = new ListNode(0,head);
        ListNode* prev = dummy;
        ListNode* cur = head;
        while (cur && cur->next)
        {
            if (cur->val == cur->next->val) 
            {
                while (cur->next && cur->val == cur->next->val) 
                {
                    cur = cur->next;
                }
                prev->next = cur->next; // Skip all duplicates
            } 
            else 
            {
                prev = cur; // Move to next unique node
            }
            cur = cur->next;
        }

        return dummy->next;
    }
};