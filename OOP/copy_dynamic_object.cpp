#include<bits/stdc++.h>
using namespace std;
class Person{

    public:
        string name;
        int age;

        Person(string name, int age){
            this->name = name;
            this->age = age;
        }
};
int main(){

    Person *rakib = new Person ("Rakib", 30);
    Person *sakib = new Person ("Sakib", 40);

    // rakib = sakib; // means rakib points to sakib object in the heap memory. Don't do this.
    *rakib = *sakib ;
    delete sakib;
    // means copy all things from object sakib and set all in rakib

    cout << rakib->name << " " << rakib->age << endl;

    return 0;
 


}