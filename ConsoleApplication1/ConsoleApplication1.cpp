﻿#include <iostream>
#include <cstdlib>
#include <list>

using namespace std;

class Stack {
    list<int> data;

public:
    void push(int value) {
        data.push_back(value);
    }

    void pop() {
        data.pop_back();
    }

    int top() {
        return data.back();
    }

    bool empty() {
        return data.empty();
    }

    void removeFirstAbove100() {
        for (list<int>::iterator it = data.begin(); it != data.end(); ++it) {
            if (*it > 100) {
                data.erase(it);
                return;
            }
        }
    }
};

int main() {
    Stack s;
    for (int i = 0; i < 100; i++) {
        int random_integer = (rand() % 301) - 150;
        s.push(random_integer);
        cout << random_integer << " ";
    }

    cout << endl << endl;
    s.removeFirstAbove100();

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}

