class MyQueue {
public:
    /** Initialize your data structure here. */
    stack <int> inbox,outbox;
    MyQueue() {
        inbox = stack <int> ();
        outbox = stack <int> ();
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        inbox.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if(!outbox.empty()) {
            int temp = outbox.top();
            outbox.pop();
            return temp;
        }
        else {
            while(!inbox.empty()) {
                outbox.push(inbox.top());
                inbox.pop();
            }
            int temp = outbox.top();
            outbox.pop();
            return temp;
        }
    }
    
    /** Get the front element. */
    int peek() {
        if(!outbox.empty()) {
            return outbox.top();
        }
        else {
            while(!inbox.empty()) {
                outbox.push(inbox.top());
                inbox.pop();
            }
        
            return outbox.top();
        }
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        if(outbox.empty() && inbox.empty())
            return true;
        else
            return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * bool param_4 = obj.empty();
 */