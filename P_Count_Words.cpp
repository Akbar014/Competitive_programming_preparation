#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    int count = 0;

    // while( ss >> word){
    //     if(word[0] != '.' && word[0] != '!' && word[0] != '?' && word[0] != ','){
            
    //         count++;
    //     } 
    // }

    bool w = false;

    for(char c:s){
        if(isalpha(c)) {
            if(w == false) count ++;
            w = true;
        }else{
            w= false;
        }
    }

    cout << count << endl;
}