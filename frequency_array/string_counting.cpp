#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;
    int cnt[27]  = {0};
    for (int i=0; i<s.size(); i++){
        // cout << int(s[i]) - 65   << " ";
        cnt[int(s[i]) - 'A'] ++;
    }

    // for (int i=0; i<26; i++){
    //     // cout << int(s[i]) - 65   << " ";
    //     cout << char( i + 'A') << "-->" << cnt[i] << endl;

    // }


    for (int i=0; i<s.size(); i++){
        // cout << int(s[i]) - 65   << " ";
        cout << s[i] << "-->" << cnt[ int(s[i])  - 'A'] << endl;

    }

    // cout << char(65) << endl;


}