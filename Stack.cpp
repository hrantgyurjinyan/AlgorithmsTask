#include <iostream>
#include <vector>

class Stack {
private:
    std::vector<int> elements; 
public:
    void push(int value) {
        elements.push_back(value);
    }

    void pop() {
        if (isEmpty()) {
            std::cerr << "Stack is empty. Cannot pop.\n";
            return;
        }
        elements.pop_back();
    }

    int top() {
        if (isEmpty()) {
            std::cerr << "Stack is empty. Cannot retrieve top element.\n";
            return -1; 
        }
        return elements.back();
    }

    bool isEmpty() const {
        return elements.empty();
    }

    size_t size() const {
        return elements.size();
    }
};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Top element: " << stack.top() << std::endl;
    stack.pop();
    std::cout << "Top element after pop: " << stack.top() << std::endl; 

    stack.pop();
    stack.pop();
    stack.pop(); 

    return 0;
}
