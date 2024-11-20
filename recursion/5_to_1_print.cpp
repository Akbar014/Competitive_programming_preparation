#include<bits/stdc++.h>
using namespace std;

void fun(int i){
    if(i==0){
        return;
    }
    cout << i << endl;
    fun (i-1);
}

int main(){
    fun(5);
    return 0;
}