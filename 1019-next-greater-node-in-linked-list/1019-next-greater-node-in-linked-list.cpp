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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> res;
        //ListNode* cur=head;
        while(head)
        {
            res.push_back(head->val);
            head=head->next;
        }
        int n=res.size();
        vector<int> out(n,0);
        stack<int> st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && res[st.top()]<res[i])
            {
                out[st.top()]=res[i];
                st.pop();
            }
            st.push(i);
        }
        return out;
    }
};