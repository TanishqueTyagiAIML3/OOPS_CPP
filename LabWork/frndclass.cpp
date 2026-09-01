#include <bits/stdc++.h>
using namespace std;
class Student{
    private:
    int mark;
    public:
    Student(int marks){
        mark=marks;
    }
    friend class Teacher;
};
class Teacher{
    public:
    void display(Student s){
        if(s.mark>75)
        cout<<"Pass"<<endl;
        else
        cout<<"Fail"<<endl;
    }
};
int main(){
    Student st(100);
    Teacher t;
    t.display(st);
}