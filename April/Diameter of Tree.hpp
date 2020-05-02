int ans;
int height(TreeNode* root){
    if(!root) return 0;
    int lh= height(root->left);
    int rh = height(root->right);

    ans = max(ans,1+lh+rh);
    return 1+max(lh,rh);

}



int diameterOfBinaryTree(TreeNode* root){
    // return max(0,diameterOfBinaryTreeH(root)-1);
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ans = 0;
    height(root);
    return max(ans-1,0);
}
