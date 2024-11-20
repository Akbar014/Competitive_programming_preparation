#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    char name[100];
    int roll;
    int age;

  
};
int main(){

    // Student A("rahim", 230, 20);
    Student a, b;
    // a.roll = 324;
    // a.age = 26;
    // char tmp[100] = "Rahim";
    // strcpy(a.name, tmp);


    // input name with space
    cin.getline(a.name, 100);
    // getchar();
    // cin.ignore();
    cin >> a.roll >> a.age ;

    cin.ignore();

     cin.getline(b.name, 100);
    // getchar();
    // cin.ignore();
    cin >> b.roll >> b.age ;


    // cin >> a.name >> a.roll >> a.age ;


    cout << a.name  << " " << a.roll << " " << a.age << endl;
    cout << b.name  << " " << b.roll << " " << b.age << endl;


}