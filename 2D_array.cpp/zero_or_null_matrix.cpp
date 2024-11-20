#include<bits/stdc++.h>
using namespace std;
int main(){
    int row, col;
    cin >> row >> col;
    int ar[row][col];
    
    int cnt = 0;
    for ( int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            cin >> ar[i][j] ;
        }
    }



    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            if(ar[i][j] == 0){
                cnt ++;
            }
        }
    }

    if (cnt == (row * col)){
        cout << "This is zero or null matrix";
    }else{
        cout << "This is not zero or null matrix";
    }

}