class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int n = nums.size();
        
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        
        int i = 0;
        for (int reach = 0; i < n && i <= reach; ++i)
            reach = max(i + nums[i], reach);
        return i == n;
    }
};
