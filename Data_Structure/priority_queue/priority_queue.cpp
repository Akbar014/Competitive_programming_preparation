
#include<bits/stdc++.h>
using namespace std;
int main(){
    // priority_queue<int>pq;   // max heap
    priority_queue<int, vector<int>, greater<int>>pq;   // min heap

    // pq.insert(10);
    // pq.insert(20);
    // pq.insert(30);
    // pq.insert(40);

    while(true){
        int c;
        cin >> c;
        if(c==0){
            int x;
            cin>>x;
            pq.push(x);
        }
        else if(c==1){
            pq.pop();
        }
        else if(c==2){
            cout << pq.top() << endl;
        }
        else{
            break;
        }
    }

    return 0;


}