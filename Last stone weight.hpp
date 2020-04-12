priority_queue<int> p;
int lastStoneWeight(vector<int>& stones) {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    for(auto &i:stones){
        p.push(i);
    }

    while(p.size()>1){
        int x = p.top();
        p.pop();
        int z = p.top();
        p.pop();

        if(x==z)
            continue;
        p.push(x-z);
    }
    if(p.size()==0)
        return 0;
    return p.top();
}
