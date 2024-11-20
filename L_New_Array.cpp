#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    // vector <int> v1(n);
    int v1[n];
    vector <int> v2(n);
    vector<int> result;

    for (int i=0; i<n; i++){
        cin >> v1[i];
    }
    for (int i=0; i<n; i++){
        int x ;
        cin>> x;
        result.push_back(x);
    }

    result.insert(result.end(),v1, v1+n);

    for(int val:result){
        cout << val << " " ;
    }
    return 0;
}