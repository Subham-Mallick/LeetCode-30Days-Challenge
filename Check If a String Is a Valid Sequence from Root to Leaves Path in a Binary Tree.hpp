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
    
    bool helper(TreeNode* r,vector<int>& v, int pos)
    {
        if(r==NULL)
            return (v.size()==0);
        
        
        if(r->left == NULL and r->right == NULL and pos==v.size()-1 and r->val == v[pos])
            return true;
        
        return (pos<v.size() and (r->val==v[pos]) and (helper(r->left,v,pos+1) or helper(r->right,v,pos+1)));
        
        
    }
    
    bool isValidSequence(TreeNode* root, vector<int>& arr) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        
        return helper(root,arr,0);
        
    }
};
