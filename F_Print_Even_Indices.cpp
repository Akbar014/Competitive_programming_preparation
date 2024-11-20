#include<bits/stdc++.h>
using namespace std;

void print_array(int a[], int size){
    int i = size;
    if (i<0) return;
    if(i%2 == 0)
    cout << a[i] << " " ;
    print_array(a,size-1);
    

}

int main(){

    int size;
    cin >> size;
    int ar[size];

    for(int i=0; i<size; i++){
        cin >> ar[i] ;
    }

    print_array(ar, size-1);
    
}