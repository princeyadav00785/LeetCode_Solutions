// https://leetcode.com/problems/implement-queue-using-stacks

#include <stack>

class MyQueue {
private:
    std::stack<int> inStack; // For push operations
    std::stack<int> outStack; // For pop and peek operations

    // Move elements from inStack to outStack
    void transferElements() {
        if (outStack.empty()) {
            while (!inStack.empty()) {
                outStack.push(inStack.top());
                inStack.pop();
            }
        }
    }

public:
    MyQueue() {}

    // Push element x to the back of the queue
    void push(int x) {
        inStack.push(x);
    }

    // Removes the element from the front of the queue and returns it
    int pop() {
        transferElements();
        int front = outStack.top();
        outStack.pop();
        return front;
    }

    // Returns the element at the front of the queue
    int peek() {
        transferElements();
        return outStack.top();
    }

    // Returns true if the queue is empty, false otherwise
    bool empty() {
        return inStack.empty() && outStack.empty();
    }
};
