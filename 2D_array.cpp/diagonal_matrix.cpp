#include<bits/stdc++.h>
using namespace std;
int main(){

    int row, col;
    cin >> row >> col;
    int ar[row][col];
    
    for ( int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            cin >> ar[i][j] ;
        }
    }

    int flag = 1;

    // secondary diagonal 

    // for (int i=0; i<row; i++){
    //     for (int j=0; j<col; j++){
    //         if(i+j == row-1){
    //             continue;
    //         }
    //         if(ar[i][j] != 0){
    //             flag = 0;
    //         }
    //     }
    // 

    // secondary diagonal 

    // primary diagonal 
    
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            if(i == j){
                continue;    // where i == j then continue cause this is the diagonal value
            }
            if(ar[i][j] != 0){
                flag = 0;
            }
        }
    }

    // primary diagonal 
    

    if(flag == 0){
        cout << "Not Diagoanl" <<  endl;
    }else{
        cout << "Diagonal" << endl; 
    }

}