#include<bits/stdc++.h>
using namespace std;
int count_vowel(string & c,int i){
    if(c[i] == '\0'){
        return 0;
    }

    // // int count;
    // if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i] == 'o' || c[i] == 'u'){
    //     count = count + 1;
    // }

    // int result = count_vowel(c, i+1, count);
    // return result;

    int ans = count_vowel(c, i+1);
    if(tolower(c[i]) =='a' || tolower(c[i])=='e' || tolower(c[i])=='i' || tolower(c[i]) == 'o' || tolower(c[i]) == 'u'){
        return ans + 1;
    }else{
        return ans;
    }

}

int main(){
    // char c[201];
    // cin.getline(c, 201);
    
    string c;     
    getline(cin, c);

    // cout << c << endl;
    int r = count_vowel(c,0);
    cout << r << endl;
}