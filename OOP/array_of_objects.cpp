#include<bits/stdc++.h>
using namespace std;
class Person{

    public:
        string name;
        int age;

        // Person(string name, int age){
        //     this->name = name;
        //     this->age = age;
        // }
};
int main(){

    // int ar[n];
    int n;
    cin >> n;
    
    // int * ar = new int[n];
    Person * ar = new Person[n];

    for(int i=0; i<n; i++)
    {
        getchar();

        getline(cin, ar[i].name);
        
        cin >> ar[i].age ;

        // cout << i ;
    }

    for (int i=0;i<n; i++){
        cout << ar[i].name << " " << ar[i].age << endl;
    }
    // cout << endl;

    return 0;
 


}