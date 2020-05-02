bool checkValidString(string s) {
        
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int lower = 0, upper = 0;
    for (char c : s) {
        if (c=='(') {
            lower++;
            upper++;
        } else if (c==')') {
            lower--;               
            upper--;
        } else { // * 
            lower--;
            upper++;
        }
        lower = max(lower, 0);
        if (upper<0) // unmatched ')' found
            return false;
    }
    return lower==0;
}
