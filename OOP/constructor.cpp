#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int roll;
    int age;
    double cgpa;

    Student(int roll, int age, double cgpa) {
        this->roll = roll;
        this->age = age;
        this->cgpa = cgpa;
    }
};
int main(){

    Student rahim(20, 30, 4.98);
    Student karim(25, 35, 4.92);


    cout << rahim.cgpa  << " " << rahim.roll << " " << rahim.age << endl;
    cout << karim.cgpa  << " " << karim.roll << " " << karim.age << endl;


}