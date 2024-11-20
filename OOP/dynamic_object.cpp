#include<bits/stdc++.h>
using namespace std;

class Student{

    public:
    int roll;
    int age;
    double cgpa;

    Student (int roll, int age, double cgpa){
        this->roll = roll;
        this->age = age;
        this->cgpa = cgpa;
    }
};

// Student fun(){

//     Student rahim(20, 30, 4.98);  // object creaed in stack memory
//     cout << rahim.roll <<  " " <<rahim.age << " " << rahim.cgpa << endl;
//     return rahim;   // return object 
// }

Student * fun(){

    Student * rahim = new Student(20,30,4.98);
    return rahim;
}
int main(){

    // Student  a = fun();  // return object from first fun function 
    Student * a = fun(); // return address of the object 
    cout << "After return from fun" << endl;
    // cout << a.roll ; // output from object  from first fun function 
    cout << a->roll ; // output from address 

}