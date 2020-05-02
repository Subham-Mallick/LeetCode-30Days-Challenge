    TreeNode* helper(vector<int>& preorder,int &preIndex, int low,int high,int n){
        
        if(preIndex>=n or low>high)
            return NULL;
        
        TreeNode* nn = new TreeNode(preorder[preIndex]);
        preIndex ++;
        
        if(low == high)
            return nn;
        
        int i;  
        for ( i = low; i <= high; ++i )  
            if ( preorder[ i ] > nn->val )  
                break; 
       
        nn->left = helper ( preorder, preIndex, preIndex,  
                                         i - 1, n );  
        nn->right = helper ( preorder, preIndex, i, high, n );  

        return nn; 
        
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        std::ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        
        int preIndex = 0;
        return helper(preorder, preIndex, 0,preorder.size()-1,preorder.size());
    }
