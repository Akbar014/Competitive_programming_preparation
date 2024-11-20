#include<bits/stdc++.h>
#include<limits.h>
using namespace std;

int find_max(int ar[] , int i, int n){

    if(i == n){
        return INT_MIN;
    }
    int result = find_max(ar, i+1, n);
    // if(ar[i]> result){
    //     return ar[i];
    // }else{
    //     return result;
    // }
    return max(ar[i],result);

    
}
int main(){
    int n;
    cin >> n; 
    int ar[n];
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }

    int max_val = find_max(ar, 0, n);
    cout << max_val << endl;

    return 0;
}