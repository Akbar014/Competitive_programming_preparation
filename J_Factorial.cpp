#include<bits/stdc++.h>
using namespace std;

int find_factorial(int n){

    if(n==0){
        return 1;
    } 

    int fact = n * find_factorial(n-1);
    return fact;
}

int main(){
    int n;
    cin >> n;
    int result = find_factorial(n);
    cout << result << endl;
}
