#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n ;
    stack<int>s;
    for (int i=0; i<n; i++){
        int x;
        cin >> x;
        s.push(x);
    }

    cin >>m;
    queue<int>q;

    
    for (int i=0; i<m; i++){
        int x;
        cin >> x;
        q.push(x);
    }

    bool flag = true;

   
    while(!s.empty()){

        int val1 = s.top();
        s.pop();
        int val2 = q.front();
        q.pop();

        if( val1 !=val2 ){
            flag = false;
            break;
        }
    }
    

    if(flag){
        cout << "YES" << endl;
    }else{
        cout << "NO" <<  endl;
    }

    return 0;
}