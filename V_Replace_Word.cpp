#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string str2 = "EGYPT" ;

    int pos = s.find(str2);
    // cout << pos << endl; 

    while(pos != -1){
        s.replace(pos, 5, " ");
        pos = s.find(str2);
    }

    // s.replace(s.begin(), 'EGYPT', ' ');

    cout << s << endl;
}