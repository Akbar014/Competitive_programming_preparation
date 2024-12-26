//https://codeforces.com/contest/2044/problem/C
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
        int m,a,b,c;
        cin >> m >> a >> b >> c;
        int arr[2][m] ;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < m; j++) {
                arr[i][j] = 0; // Default value
            }
        }
        // for (int i = 0; i < 2; i++) {
        //     for (int j = 0; j < m; j++) {
        //         cout << arr[i][j]  << endl; // Default value
        //     }
        // }
        int count = 0;
        // int k1,k2,k3;
        // Calculate valid ranges
        int k1 = min(a, m);
        int k2 = min(b, m);
        int k3 = min(c, m);

        // k3=c;

        for(int i=0; i<k1; i++){
            if(arr[0][i]==0){
                arr[0][i] = 1;
                count++;
            }
            
        }

        for(int i=0; i<k2; i++){
            if(arr[1][i]==0){
                arr[1][i] = 1;
                count++;
            }
            // arr[1][i] = 1;
            // count++;
        }

        for (int i = 0; i < k3; i++) {
            if (arr[1][i] == 0) {
                arr[1][i] = 1;
                count++;
            }
        }

        cout << count << endl;

    }
    return 0;
}