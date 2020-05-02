// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    
    int helper(int low,int high)
    {
        if(high>=low)
        {
            int mid = low+(high-low)/2;
            if(isBadVersion(mid))
                return helper(low,mid-1);
            else
                return helper(mid+1,high);
        }
        return low;
    }
    
    int firstBadVersion(int n) {
        
        std::ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        
        return helper(1,n);
    }
};