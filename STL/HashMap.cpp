#include<iostream>
using namespace std;

int main(){
    unordered_map<string, int> price;

    price["apple"] = 10;
    price["banana"] = 20;
    price["mango"] = 30;
    price["apple"] = 40; // if we use same key, auto update the value with last value

    for(auto it: price){
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout << price["apple"] << endl;

    prices.erase("apple");

    return 0;
}