#include<iostream>
#include<stdion.h>
using namespace std;
int main(){
    int a,b;
    // while(scanf("%d %d", &a, &b) != EOF)
    // {
    //     printf("%d %d\n", a, b);
    // }
    while(cin>> a >> b) 
    {
        cout << a << " " << b << endl;
    }
    return 0;
}