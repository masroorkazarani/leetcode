class CustomStack {

public:
stack <int> st;
int m_size;
int temp;
    CustomStack(int maxSize) {
        m_size = maxSize;
    }
    
    void push(int x) {
        if(st.size() <m_size){
            st.push(x);
        }
    }
    
    int pop() {
        if(st.size() >=1){
            temp = st.top();
            st.pop();
            return temp;
        }
        return -1;
    }
    
    void increment(int k, int val) {

        stack <int> ted;
       while(!st.empty()){
        ted.push(st.top());
        st.pop();
       }

       while(!ted.empty() && k!=0){
        int f_val=ted.top()+val;
        st.push(f_val);
        ted.pop();
        k--;
       }
         
        while(!ted.empty()){
        int f_val=ted.top();
        st.push(f_val);
        ted.pop();
        
       }
    
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */