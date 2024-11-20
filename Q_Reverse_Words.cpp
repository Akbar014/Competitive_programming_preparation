#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    bool first = true;
    while( ss >> word){
        string nword = string(word.rbegin(), word.rend());
        if(!first){
            cout << " " ;
        }
        cout << nword ;
        first = false;
    }

   

    // cout << count << endl;
}