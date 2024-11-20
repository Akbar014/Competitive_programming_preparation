#include<bits/stdc++.h>
using namespace std;
int main(){

    // list<int> myList;
    // cout<< myList.size();

    // list<int> myList(5) ; // 5 is the size here
    // list<int> myList(5,10); // 5 is the size and 10 is the default value

    // list<int> list1 = {1,2,3,4};
    // list<int> myList(list1);

    // vector<int> v = {1,2,3,4};
    // list<int> myList(v.begin(), v.end());

    int ar[5] = {10,20,30,40};
    list<int> myList(ar,ar+4);
    

    // for(auto it=myList.begin(); it!=myList.end(); it++){
    //     cout << *it << endl;
    // }

    for (int val : myList){
        cout << val << endl;
    }

    return 0;
}


//https://docs.google.com/document/d/1ck7jVccsfKckkS9sB1BmE2COXRDvYOCEfIRX3Tu7SHQ/edit?tab=t.0