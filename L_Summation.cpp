#include<bits/stdc++.h>
using namespace std;

int print_array(int a[], int size, int sum){
    int i = size;
    if (i<0) return sum;
    
    sum = sum + a[i];
    // cout << a[i] << " "  << sum << endl;
    // cout << sum << endl;
    int summation = print_array(a,size-1, sum);

    return summation ;
    
 
}

int main(){

    int size;
    cin >> size;
    int ar[size];

    for(int i=0; i<size; i++){
        cin >> ar[i] ;
    }

    int result = print_array(ar, size-1, 0);

    cout << result ;
    
}