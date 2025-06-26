#include <iostream>
using namespace std;

int main()
{
    // Vector
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(11);
    v1.push_back(12);

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << endl;
    }

    v1.pop_back();

    for (int v : v1)
    {
        cout << v << endl;
    }

    vector<int> v = {10, 20, 30, 40, 50};
    v.erase(v.begin() + 1, v.begin() + 4);  // Removes 20, 30, 40 → v = [10, 50]

    for (int v : v)
    {
        cout << v << endl;
    }

    v.clear();  // v becomes empty

    for (int v : v)
    {
        cout << v << endl;
    }
    
    return 0;
}