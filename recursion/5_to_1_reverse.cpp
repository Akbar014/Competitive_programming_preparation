#include<bits/stdc++.h>
using namespace std;

void fun(int i){
    if(i==6){
        return;
    }
    fun (i+1);
    cout << i << endl;
    
}

int main(){
    fun(1);
    return 0;
}