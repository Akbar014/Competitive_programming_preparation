#include<bits/stdc++.h>
using namespace std;

class freq{
    public:
    char value;
    int count;
};

bool cmp(freq a, freq b){

    // if(a.count > b.count) return true;
    // else return false;
    if(a.count == b.count ) return a.value < b.value;
    else return a.count > b.count;
}
int main(){

    string s;
    cin >> s;

    freq f[26];

    for(int i=0; i<26; i++){
        f[i].value = char(i + 'a');
        f[i].count = 0;
    }

    for(char c:s){
        int ascii = int(c - 'a');
        f[ascii].count++;
    }

    sort(f, f+26, cmp);

    for(int i=0; i<26; i++){
        // if(f[i].count !=0) cout << f[i].value << " " << f[i].count << endl;
        for(int j=0; j<f[i].count; j++){
            cout << f[i].value ;
        }
    }

}