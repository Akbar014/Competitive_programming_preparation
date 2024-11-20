#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t>0){
        int n;
        cin >> n;

        int ar[n];

        for(int i=0; i<n; i++){
            cin >> ar[i];
        }

        // long long min_val = INT_MAX;
        long long min_val = LLONG_MAX;

        for (int i=0; i<n-1; i++){
            for (int j=i+1; j<n; j++){
                long long sum = ar[i] + ar[j] + j -i;
                min_val = min(min_val, sum);
            }

        }

        cout << min_val << endl;

        t--;
    }
}