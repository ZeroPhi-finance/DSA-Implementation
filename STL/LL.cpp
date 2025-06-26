#include <iostream>
using namespace std;
#include <list>

int main()
{
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);

    for (int l : l)
    {
        cout << l << endl;
    }

    l.pop_back();

    for (int l : l)
    {
        cout << l << endl;
    }

    l.pop_front();

    for (int l : l)
    {
        cout << l << endl;
    }

    return 0;
}