#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int cnt[n+1] = {0};
    
    for (int i=0; i<n; i++){
        cnt[a[i]]++;
    }

    for(int i=0; i<n; i++){
        cout << i << "-->" << cnt[i] << endl;
        // cout << a[i] << endl;
    }

    return 0;
} 