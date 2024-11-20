#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    // char c[n];
    char * c = new char[n];

    for (int i=0; i<n; i++){
        cin >> c[i];
    }

    sort(c, c+n);

    // int frq[26] = {0};

    // for (int i=0; i<n-1; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(int(c[i])> int(c[j])){ 
    //             swap(c[i], c[j]);
    //         }
    //     }
    // }

    for (int i=0; i<n; i++){
        cout << c[i];
    }

}