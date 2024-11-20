#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin >>t;
    while(t>0){
        int n;
        cin >> n;
    int a[n];
    int even = 0;
    int odd =0;

    for (int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]%2 == 0){
            even++;
        }else{
            odd++;
        }
    }

    // int op = abs(n/2 - odd);
    int op = abs((even - odd)/2);

    if(n%2 !=0){
        cout << -1 << endl;
    }else{
        cout << op << endl;
    }

    t--;

    }

    return 0;
}

