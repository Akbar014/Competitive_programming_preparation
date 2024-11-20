#include<bits/stdc++.h>
using namespace std;

int main(){
    float d , p;
    cin >> d >> p;

    float result = p / (1- (d/100));

    cout << fixed << setprecision(2) <<  result << endl;
}