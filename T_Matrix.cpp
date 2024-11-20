#include<bits/stdc++.h>
using namespace std;


// int main(){
//     int n;
//     cin >> n;
//     int ar[n][n];

//     for (int i=0; i<n;i++){
//         for (int j=0;j<n;j++){
//             cin >> ar[i][j];
//         }
//     }
//     int primary_sum = 0;
//     int secondary_Sum =0;

//     for (int i=0; i<n;i++){
//         for (int j=0;j<n;j++){
//             if(i==j){
//                 primary_sum += ar[i][j];
//             }
//             if(i+j==n-1){
//                 secondary_Sum += ar[i][j];
//             }
//         }
//     }

//     int result = abs(primary_sum - secondary_Sum);

//     cout << result << endl;
// }




// <!.. without storing matrix ..!>
// int main(){
//     ios::sync_with_stdio(false); // For faster I/O
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     // Initialize sums for primary and secondary diagonals
//     long long primary_sum = 0;
//     long long secondary_sum = 0;

//     // Iterate through each row
//     for(int i = 0; i < n; ++i){
//         for(int j = 0; j < n; ++j){
//             int val;
//             cin >> val;
//             if(i == j){
//                 primary_sum += val;
//             }
//             if(i + j == n - 1){
//                 secondary_sum += val;
//             }
//         }
//     }

//     // Calculate and output the absolute difference
//     long long result = abs(primary_sum - secondary_sum);
//     cout << result << "\n";

//     return 0;
// }





// <!.. usning recursion.!>
int main(){

}
