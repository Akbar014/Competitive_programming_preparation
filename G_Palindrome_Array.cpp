#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int ar[n];

    for (int i=0; i<n; i++){
        cin >> ar[i];
    }

    bool is_palindrome = true ;

    // for (int i=0; i<n/2; i++){
    //     for (int j=n-1; j>i; j--){
    //         // if(ar[i] != ar[j]){
    //         //     is_palindrome = false;
    //         // }

    //         cout << ar[i] << "-" << ar[j] << endl;
    //     }
    // }

    int i = 0;
    int j = n-1;

    while(i<j){
        if(ar[i]!=ar[j]){
            is_palindrome = false;
        }
        i++;
        j--;
    }

    if(is_palindrome == true){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}