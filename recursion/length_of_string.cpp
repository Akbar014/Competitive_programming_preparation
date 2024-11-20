#include<bits/stdc++.h>
using namespace std;
int fun(char a[], int i){
    if(a[i]=='\0') return 0;
    int length = fun(a,i+1);
    return length + 1;
}
int main(){
    char a[11] = "hellohello";
    int length = fun(a, 0);
    cout << length ;
    return 0;
}