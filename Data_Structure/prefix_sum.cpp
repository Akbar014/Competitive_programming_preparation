#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin >> n >> q;
    vector<int>v(n);
    int pre[n];
    
// Prefix sum is used for range based sum to ensure better complexity
    for(int i=0; i<n; i++){
        cin >> v[i];
        if(i==0){
            pre[0] = v[0];
        }else{
            pre[i] = v[i] + pre[i-1];
        }
        
    }
    
    cout << endl;

    while(q>0){

        int l,r;
        cin >> l >> r; 
        l--;
        r--;

        int sum ;
         
        if(l==0){
            sum = pre[r];
        }else{
            sum = pre[r] - pre[l-1];
        }
        

        cout << sum << endl;

        q--;
    }
    return 0;
}