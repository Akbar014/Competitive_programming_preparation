#include<bits/stdc++.h>
using namespace std;

int main(){

    string a = "Hello ";
    string b = "World";

    // a += b;
    // a = a+b;
    // a.append(b);
    
    cout << a << endl;

    a.push_back('a');

    cout << a << endl;
    
    a.pop_back();

    cout << a << endl; 

    a.erase(1,2);
    cout << a << endl;
    string t = "testingggg";
    t.replace(5,2,"so");

    t.insert(2,"Best");

    t.begin(); // is a pointer which points first element
    t.end(); // is a pointer which points last element

    cout << t << endl;


}