#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int marks;
    // Student(string name, int roll, int marks){
    //     this->name = name;
    //     this->roll = roll;
    //     this->marks = marks;
    // }
};
bool cmp(Student a, Student b){
    // if(a.marks >= b.marks) return true;
    // else return false;

    // return a.marks >= b.marks;
    if(a.marks == b.marks){
        return a.roll <= b.roll;
    }else{
        return a.marks > b.marks;
    }
}

int main(){
    // Student a("Rakib hossain", 20, 89);
    // cout << a.name << " " << a.roll << " " << a.marks << endl;

    int n;
    cin >> n;

    // Student * a = new Student[n];
    Student a[n];

    for(int i=0; i<n; i++){
        // getchar();
        // getline(cin, a[i].name);
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    sort(a, a+n, cmp);
  
    for (int i=0; i<n; i++){
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl ;
    }

    return 0;

}