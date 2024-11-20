#include<bits/stdc++.h>
using namespace std;

void reverese_print(stringstream & s){
    string word;
    if(s >> word){
        reverese_print(s);
        cout << word << endl;
    }
    
    
}
int main(){
    string s = "Allah is watching everything" ;
    stringstream ss(s);
    reverese_print(ss);

    return 0;
}