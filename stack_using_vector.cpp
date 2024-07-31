#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
    vector<int> elements;

public:
    // Push an element onto the stack
    void push(int value) {
        elements.push_back(value);
    }

    // Pop an element from the stack
    void pop() {
        if (!elements.empty()) {
            elements.pop_back();
        } else {
            cout << "Stack is empty!" << endl;
        }
    }

    // Peek the top element of the stack
    int top() {
        if (!elements.empty()) {
            return elements.back();
        } else {
            cout << "Stack is empty!" << endl;
            return -1; // Return an invalid value or handle the error appropriately
        }
    }

    // Check if the stack is empty
    bool isEmpty() {
        return elements.empty();
    }

    // Get the size of the stack
    int size() {
        return elements.size();
    }
};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top element: " << stack.top() << endl;  // Output: 30

    stack.pop();
    cout << "Top element after pop: " << stack.top() << endl;  // Output: 20

    cout << "Stack size: " << stack.size() << endl;  // Output: 2

    return 0;
}
