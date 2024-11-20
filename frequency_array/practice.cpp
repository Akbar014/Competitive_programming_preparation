#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ar[n];

    for (int i=0; i<n; i++){
        cin >> ar[i];
    }

    int frq[n] = {0};

    for (int i=0; i<n; i++){
        frq[ar[i]]++;

    }

    for(int i=0; i<n; i++){
        cout << i << "-->" << ar[i] << "-->" << frq[i] << "-->" << frq[ar[i]] << endl;
    }
}