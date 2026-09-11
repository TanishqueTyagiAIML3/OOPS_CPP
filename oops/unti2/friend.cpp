#include <bits/stdc++.h>
using namespace std;
class student{
    private:
    int id;
    public:
    string n;
    student(int id1,string name)
    {
        n=name;
        id=id1;
    }
    friend student func(student s1,student s2);
    friend class Teacher;
};
class Teacher{
    public:
    void display(student s){
        cout<<"student id"<<s.id;
    }
};
student func(student s1,student s2){
    if(s1.id>s2.id)
    return s1;
    else
    return s2;
}//friend function

int main(){
    student s1(123,"Tanishque");
    student s2(12,"Sarthak");
    cout<<func(s1,s2).n<<" is unique";
    Teacher t;
    t.display(s1);
}