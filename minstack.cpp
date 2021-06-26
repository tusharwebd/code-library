class MinStack {
public:
        stack <int> box;
        int min1 = INT32_MAX;
    void push(int x) {
        if(x<=min1)
        {
            box.push(min1);
            min1 = x;
        }
        box.push(x);
    }

    void pop() {
        int up = box.top();

        box.pop();
        if(up==min1)
        {
            min1 = box.top();
            box.pop();
        }
    }

    int top() {
        return box.top();
    }

    int getMin() {
        return min1;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
