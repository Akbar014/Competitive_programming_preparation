#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n ;
    stack<int>s1;
    for (int i=0; i<n; i++){
        int x;
        cin >> x;
        s1.push(x);
    }

    cin >>m;
    stack<int>s2;

    
    for (int i=0; i<m; i++){
        int x;
        cin >> x;
        s2.push(x);
    }

    bool flag = true;

    if(n==m){
        while(!s1.empty()){
            int val1 = s1.top();
            int val2 = s2.top();
            if(s1.top() !=s2.top()){
                flag = false;
                break;
            }else{
                s1.pop();
                s2.pop();
            }
        }
    }else{
        flag = false;
    }

    if(flag){
        cout << "YES" << endl;
    }else{
        cout << "NO" <<  endl;
    }

    return 0;
}