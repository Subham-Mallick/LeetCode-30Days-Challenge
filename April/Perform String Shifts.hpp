string stringShift(string s, vector<vector<int>>& shift) {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int rs=0;
    for(int i=0;i<shift.size();i++)
    {
        if(shift[i][0]==0)
            rs = rs + shift[i][1];
        else
            rs = rs - shift[i][1];
    }
    int d = abs(rs);
    d = d%s.size();
    if(rs<0)
    {
        reverse(s.begin(), s.begin()+s.length()-d); 
        reverse(s.begin()+s.length()-d, s.end()); 
        reverse(s.begin(), s.end());
    }
    else
    {
        reverse(s.begin(), s.begin()+d); 
        reverse(s.begin()+d, s.end()); 
        reverse(s.begin(), s.end());
    }
    return s;
}
