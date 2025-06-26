#include <iostream>
using namespace std;
#include <unordered_set>

int main()
{
    unordered_set<string> s;

    s.insert("hello");
    s.insert("world");
    s.insert("hello");
    s.insert("dog");

    if (s.find("dog") != s.end())
    {
        cout << "Dog is present\n";
    }

    for (auto s : s)
    {
        cout << s << endl;
    }

    s.erase("world");

    for (auto s : s)
    {
        cout << s << endl;
    }

    return 0;
}