#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    while(n>0){
        int s;
        cin >> s;

        // char s2[s];
        // cin.getline(s2, s);

        // cout << s2 << endl;
        cin.ignore();
        char c[s];
        cin.getline(c,s+1);
        // cout << c << endl;

        int f[26] = {0};
        int b[26] = {0};

        for (int i=0; i<s; i++){

            // f[c[i] - 'A']++;
            // cout << f[c[i] - 'A'] << endl;
            if(f[c[i] - 'A']==0){
                f[c[i] - 'A'] += 2;
            }else{
                f[c[i] - 'A']++; 
            }

            // baloon[c[i] - 'A']++;

            // if(f[i] == c[i]-'A'){
            //     f[i]++;
            // }

            // if(c[i] - 'A'){
                
            //     baloon++;
            // }
            
            // f[c[i]]++;
        }
       int baloon = 0;
        for (int i=0; i<26; i++){
            if(f[i] != 0){
                // cout << f[i] << endl;
                baloon += f[i];
            }
            
        }
       
        cout << baloon << endl;

        // for (int i=0; i<26; i++){
        //     // f['c[i]' - 65]++;
        //     cout << char(i + 65) << f[i] << endl;
        // }


        n--;
    }
    

    // https://codeforces.com/contest/1703/problem/B

    return 0;
}