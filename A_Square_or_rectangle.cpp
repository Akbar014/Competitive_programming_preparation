#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t ;

    while(t>0){

        int h, w;
        cin >> h >> w;

        if(h==w){
            cout << "Square" << endl;
        }else{
            cout << "Rectangle" << endl;
        }



        t--;
    }
}