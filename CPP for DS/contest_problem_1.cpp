#include<bits/stdc++.h>
using namespace std;
int main(){

    int testcasse ;
    cin >> testcasse;

    while(testcasse > 0){
        int a;
        int b;
        cin >> a >> b;
        int difference = b-a;
        int c = (difference-a)+(b-difference);
        cout << c << endl;
        testcasse--;

    }


        
}

    
