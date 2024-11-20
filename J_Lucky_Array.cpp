#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;
    int ar[n];
    int min = INT_MAX;
    int cnt = 0;
    for (int i=0; i<n; i++){
        cin >> ar[i];
        if(ar[i]<min){
            min = ar[i];
        }
        
    }

 

    for (int i=0; i<n; i++){
        if(ar[i]==min){
            cnt++;
        }
    }

    if(cnt%2 == 0){
        cout << "Unlucky" << endl;
    }else{
        cout << "Lucky" << endl;
    }

    return 0;
}