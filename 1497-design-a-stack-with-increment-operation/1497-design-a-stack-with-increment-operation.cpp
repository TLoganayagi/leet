class CustomStack {
    private:
    vector<int>stack;
    int top=-1,msize=0;
public:
    CustomStack(int maxSize) {
        msize=maxSize;
        stack.resize(msize,0);
    }
    
    void push(int x) {
        if(top==msize-1)return;
        stack[++top]=x;
    }
    
    int pop() {
        if(top==-1)return -1;
        int r=stack[top];
        top--;
        return r;
    }
    
    void increment(int k, int val) {
        if(top+1<k){
            for(int i=0;i<=top;i++) stack[i]+=val;
        }else for(int i=0;i<k;i++) stack[i]+=val;
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */