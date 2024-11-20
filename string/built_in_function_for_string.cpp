#include<bits/stdc++.h>
using namespace std;

int main(){

    string s= "Hello";

    s.size();

    cout << s << " " << "size : " << s.size() << endl;
    cout <<  s.max_size() << endl;
    cout <<  s.capacity() << endl;
    s.clear(); // clear the string
    cout << s << endl;
    s.empty();  // if empty then return true else return false
    if(s.empty()==true){
        cout << "Empty" << endl;
    }else{
        cout << "Not empty" << endl;
    }

    s.resize(5, 'x');

    cout << s[0] << endl;

    cout << s.at(0) << endl;

    cout << s.back() << endl;
    cout << s.front() << endl;
    



}