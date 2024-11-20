#include<bits/stdc++.h>
using namespace std;

void fun ( int *&p ){  //

    // p = NULL;
    cout << p << endl;  // val er address 
    cout <<  &p << endl;  // ptr er address (if parameter is int * &p then it is the reference of ptr and there address is same if parameter int * p then it is the new address )

}
int main(){

    int val = 10;
    int * ptr = &val;

    cout << "Fron fun function " << endl;
    fun(ptr);  // ptr er value holo val er address 
    cout << "Fron main function " << endl;
    cout << ptr << endl; // val er address 
    cout << &ptr << endl; // ptr er address 

    return 0;
}