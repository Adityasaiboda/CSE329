#include <iostream>
#include <queue>

class Stack {
    std::queue<int> q1, q2;

public:
    void push(int data) {
        q1.push(data);
    }

    int pop() {
        if (q1.empty())
            return -1;
        
        while (q1.size() > 1) {
            int temp = q1.front();
            q1.pop();
            q2.push(temp);
        }
        int res = q1.front();
        q1.pop();
        std::swap(q1, q2);
        return res;
    }
};

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    std::cout << s.pop() << std::endl;
    std::cout << s.pop() << std::endl;
    std::cout << s.pop() << std::endl;
    return 0;
}

