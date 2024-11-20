#include<bits/stdc++.h>
using namespace std;

int main(){

    int * a = new int [5];
    for(int i=0; i<5; i++){

        cin >> a[i];
    }

    int * b = new int [5];

    
    // for(int i=0; i<5; i++){
    //     b[i] = a[i];
    // }


   
    delete [] a;  //array delete from heap memory
    a = nullptr;
    cout << a << endl;
    a = new int [7]; //
    cout << a << endl;


    // for(int i=0; i<5; i++){
    //     cout << b[i] << endl;
    // }

    return 0;
}