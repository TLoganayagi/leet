class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* cur = head;
        while(cur != NULL) {
            count++;
            cur = cur->next;
        }
        int pos = count-n+1;
        if(pos == 1) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        cur = head;
        for(int i=1;i<pos-1;i++) {
            cur = cur->next;
        }
        ListNode* temp = cur->next;
        cur->next = cur->next->next;
        delete temp;

        return head;
    }
};
