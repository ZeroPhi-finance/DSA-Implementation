#include<iostream>
using namespace std;

// stack in STL
// empty, top, size => Return values
// push, pop

int main() {
    stack<int> s1;
    stack<int> s2;

    s1.push(1);
    s2.push(2);
    s2.push(3);

    if (!s2.empty()) {
        s2.pop();
    }

    if (!s2.empty()) {
        cout << "Top of s2: " << s2.top() << endl;
    }

    s2.swap(s1);
    cout << "Size of s2 after swap: " << s2.size() << endl;

    return 0;
}
