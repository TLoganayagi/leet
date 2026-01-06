/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int lvl=1,anslvl=1,maxsum=INT_MIN;
        while(!q.empty())
        {
            int n=q.size();
            int cursum=0;
            for(int i=0;i<n;i++)
            {
                TreeNode* node=q.front();
                q.pop();
                cursum+=node->val;
                if(node->left)  q.push(node->left);
                if(node->right) q.push(node->right);
            }
            if(cursum>maxsum)
            {
                maxsum=cursum;
                anslvl=lvl;
            }
            lvl++;
        }
        return anslvl;
    }
};