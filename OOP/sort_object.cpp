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

int main(){
    // Student a("Rakib hossain", 20, 89);
    // cout << a.name << " " << a.roll << " " << a.marks << endl;

    int n;
    cin >> n;

    Student * a = new Student[n];

    for(int i=0; i<n; i++){
        getchar();
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
    }

    // sort(a, a+n);

    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            // if(a[i].name > a[j].name){
            //     swap(a[i], a[j]);
            // }
            if(a[i].marks < a[j].marks){
                swap(a[i], a[j]);
            }
            if(a[i].marks == a[j].marks){
                if(a[i].roll > a[j].roll){
                    swap(a[i], a[j]);
                }
            }
            
        }
    }

    for (int i=0; i<n; i++){
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl ;
    }


    return 0;






}