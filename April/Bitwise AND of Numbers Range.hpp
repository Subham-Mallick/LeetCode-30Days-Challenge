int rangeBitwiseAnd(int m, int n) {
        std::ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        
        int ans = 0;
        for (int bit = 30;bit>=0;bit--)
        {
            if( (m&(1<<bit)) !=  (n&(1<<bit)))
                break;
            ans = ans | (m&(1<<bit));
        }
        return ans;
    }
