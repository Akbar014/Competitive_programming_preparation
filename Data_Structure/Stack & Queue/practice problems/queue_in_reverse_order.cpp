#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;
    queue<int>q1;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        q.push(x);
    }
    stack<int>s;
    while(!q.empty()){
        s.push(q.front());
        q.pop();

    }

    while(!s.empty()){
        q1.push(s.top());
        s.pop();
    }

    while(!q1.empty()){
        cout << q1.front() << endl;
        q1.pop();
    }
    
    return 0;
}