#include<bits/stdc++.h>
using namespace std;

void show(int n, char c){

    for(int i=0; i<n; i++){
        cout << c << " " ;
    }
    cout << endl;
}
int main(){

    int t;
    cin >>t;
    while(t>0){
        int n;
        char c;
        cin >> n >> c;
        show(n,c);

        t--;
    }
    return 0;
}