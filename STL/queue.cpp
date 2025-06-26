#include <iostream>
using namespace std;

// queue in STL
// Front, Back Return values
// push, pop

int main()
{
    queue<int> q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    cout << q1.front() << endl;
    cout << q1.back()  << endl;
    q1.pop();
    cout << q1.front()  << endl;
    cout << q1.back()  << endl;
    cout << q1.size() << endl;
    return 0;
}