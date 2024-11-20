#include<bits/stdc++.h>
using namespace std;
int main(){

    int x;
    cin >> x;
    
    string s = to_string(x);
    string s1 = std::string(s.rbegin(), s.rend());
    cout << s1 << endl;
    int num = std::stoi(s1);
    cout << num << endl;
    return 0;

    Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
}