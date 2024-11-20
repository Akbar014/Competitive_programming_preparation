#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,k;
    cin >> n >> k;
    long long ar[n];

    for (int i=0; i<n; i++){
        cin >> ar[i];
    }

    sort(ar, ar+n, greater<long long>());

    long long max_val = 0;

    for (int i=0; i<k && ar[i] > 0; i++){
        max_val += ar[i];
    }
   
    cout << max_val << endl;

    return 0;
}
