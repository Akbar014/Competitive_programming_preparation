#include<bits/stdc++.h>
using namespace std;
int main(){
    int row, col;
    cin >> row >> col ;
    int a[row][col] ;
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            // cout << "a" << "[" << i << "]" << "[" << j  << "]" << endl;
            cin >> a[i][j];
        }
    }

    // int e; // exact row number 
    // cout << "Enter row number : " ;
    // cin >> e ;
    // for (int i=0; i<col; i++){
    //     cout << a[e][i] ; 
    // }
    // cout << endl;


    int e; // exact column number 

    cout << "Enter column number : " ;
    cin >> e ;
    for (int i=0; i<row; i++){
        cout << a[i][e] ; 
    }
    cout << endl;

    return 0;
}