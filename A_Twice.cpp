#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int a[n];

        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        int count = 0;
        vector<int>v;

        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n;j++){
                
                auto it = find(v.begin(),v.end(), i);
                if(it == v.end() && a[i]==a[j]){
                    v.push_back(i);
                    v.push_back(j);
                    count++;
                }
            }
        }

        cout << count << endl;
    }


    return 0;
}