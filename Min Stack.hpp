stack<long> stack;
long minEle;
MinStack() {
std::ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
while(!stack.empty())
    stack.pop();
}

void push(int x) {
    if(stack.empty()){
        stack.push((long)0);
        minEle = x;
    }
    else{
        stack.push(x-minEle);
        if(x<minEle){
            minEle = x;
        }
    }
}

void pop() {
    long x = stack.top();
    stack.pop();
    if(x<0){
        minEle = minEle-x;
    }
}

int top() {
    long x = stack.top();
    if(x<0){
        return (int)minEle;
    }
    else{
        return (int)(x+minEle);
    }
}

int getMin() {
    if(!stack.empty()){
        return (int)(minEle);
    }
    return -1;
}
