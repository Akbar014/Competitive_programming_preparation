#include<bits/stdc++.h>
using namespace std;
// int fun(char a[], int i){
//     if(a[i]=='\0') return 0;
//     int length = fun(a,i+1);
//     return length + 1;
// }
int main(){
    int n,m;
    cin >> n >> m;
    int ar[n][m]; 
  


    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> ar[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = m - 1; j >= 0; j--) {
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}