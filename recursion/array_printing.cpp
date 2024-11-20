#include<bits/stdc++.h>
using namespace std;

void print_array(int ar[], int n, int i ){
    if(i==n) return;
    cout << ar[i] << endl;
    print_array(ar, n, i+1);
}

int main(){

    int n;
    cin >> n;
    int ar[n];
    for (int i=0; i<n; i++){
        cin >> ar[i];
    }

    print_array(ar, n, 0);

}