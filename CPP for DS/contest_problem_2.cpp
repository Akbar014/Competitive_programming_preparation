#include<bits/stdc++.h>
using namespace std;
int main(){
    int testcase;
    cin >> testcase;
    while(testcase>0){
        int n;
        cin >> n;
        string s;
        vector<int> v;
        for (int i=0; i<n; i++){
            cin >> s;
            for(int j=0; j<4; j++){
                if(s[j]=='#'){
                    v.push_back(j+1);
                }
            }

        }

        for (int i=n-1; i>=0; i--){

            cout << v[i] << ' ';
            
        }
        cout << endl ;

        testcase--;
    }
}