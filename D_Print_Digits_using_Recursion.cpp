#include<bits/stdc++.h>
using namespace std;

void print_digit(int number){

    if(number == 0){
        return ;
    }

    int digit = number%10; 
    print_digit(number/10);
    
    cout << digit << " " ;

}
int main(){
    int n;
    cin >> n;

    while(n>0){

        int number;
        cin >> number;
        print_digit(number);
        cout << endl;
        n--;
    }
}