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
    Solution(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int sumHelper(TreeNode *t, int &max_sum)
    {
        if(!t)
            return 0;
        
        int l=  max(0, sumHelper(t->left, max_sum));
        int r = max(0, sumHelper(t->right, max_sum));
                    
        max_sum = max(max_sum, l+r+t->val);
                    
        return max(l,r)+t->val;
    }
    
    int maxPathSum(TreeNode* root) {
        
        if(!root)
            return 0;
        
        int max_sum=INT_MIN;
    
        sumHelper(root, max_sum);
        
        return max_sum;

    }
};
