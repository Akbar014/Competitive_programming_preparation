#include<bits/stdc++.h>
using namespace std;
int main(){

    list<int> myList = {10,20,30,40,50,60,70};
    list<int> newList;
    vector<int> v ={1,2,3};
    // myList.push_back(80);
    // newList = myList;
    // newList.assign(myList.begin(), myList.end());

    // myList.insert(next(myList.begin(), 2), 100);
    // myList.insert(next(myList.begin(), 2), {100,200,300});
    // myList.insert(next(myList.begin(), 2), newList.begin(), newList.end());
    // myList.insert(next(myList.begin(), 2), v.begin(), v.end());


    // myList.erase(next(myList.begin(), 2));
    // myList.erase(next(myList.begin(), 2), next(myList.begin(),5));

    // replace(myList.begin(), myList.end(), 20,100);
    // auto it = find(myList.begin(), myList.end(), 40);
    // if(it == myList.end()){
    //     cout << "Not Found" << endl;
    // }
 
    for(int val:myList){
        cout << val << endl;
    }

    return 0;
}