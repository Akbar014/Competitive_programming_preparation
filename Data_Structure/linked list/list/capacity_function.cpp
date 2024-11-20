#include<bits/stdc++.h>
using namespace std;
int main(){

    list<int> myList= {10,20,30,40,50};

    myList.resize(2);
    myList.resize(4);
    myList.resize(10,100);
    myList.clear();
    cout << myList.max_size() << " " << myList.size() << endl;



    for(int val:myList){
        cout << val << endl;
    }

    return 0;
}