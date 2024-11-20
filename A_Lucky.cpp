#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    getchar();

    while(n>0){
       
        string s;
        cin >> s;
        int s1 = stoi(s);
        // cout << typeid(s1).name() << endl;

        int sum1 = s[0] + s[1] + s[2];
        int sum2 = s[3] + s[4] + s[5];
        
        // // cin.getline(s,6);
        // // cout << s << endl;
        // int s1 = int(s);
        // cout << s1 << typeof(S) << endl;

        // char s[6];
        // cin.getline(s,6);
        // getchar();
        // cout << s << endl;
        
        // int sum1 = 0;
        // int sum2 = 0;
        // char s[6];
        // for(int i=0;i<6; i++){
        //     cin>> s[i];
        //     if(i<3){
        //         // sum1 += int(s[i]);
        //         sum1 += int(s[i] - 48);
        //     }else{
        //         // sum2 += int(s[i]);
        //         sum2 += int(s[i]-48);
        //     }

        // }

        // // char c =  '0';
        // // int d = int(c);

        // // cout << typeid(d).name() << endl;
        


        // // cout << sum1 << sum2 << endl ;
        // // cout << int(c) <<  endl;
        if(sum1==sum2) cout << "YES" << endl;
        else cout << "NO" << endl;




        n--;
    }
}