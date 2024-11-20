
#include<bits/stdc++.h>
using namespace std;
void print_number(int n){
    if (n==0) return ;
    print_number(n-1);
    cout << n << endl;

}
int main(){
    int input ;
    cin >> input;
    print_number(input);
}