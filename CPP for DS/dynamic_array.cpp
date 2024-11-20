#include<bits/stdc++.h>
using namespace std;

int * fun(){
    int *a = new int[5];   // stack memory te create hoise *a and  heap memory te create hoise  dynamic array
    for (int i=0; i<5; i++){
        cin >> a[i];
    }
    return a; 
}
int main(){

    int *a = fun();   //stack memory te create hoise 
    for (int i=0; i<5; i++){
        cout << a[i] << " " ;
    }
    
}