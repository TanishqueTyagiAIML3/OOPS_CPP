#include <bits/stdc++.h>
using namespace std;
class Employee{
    public:
    int id;
    string name;
    int sal;
    Employee(){
        cout<<"Default Constructor";
    }
    Employee(string n,int ID,int Sal){
        name=n;
        id=ID;
        sal=Sal;
    }
    Employee(const Employee &obj){
        id=obj.id;
        name=obj.name;
        sal=obj.sal;
    }
    void display() const{
        cout<<"ID "<<id<<endl;
        cout<<"Name "<<name<<endl;
        cout<<"Salary "<<sal;
    }
    void salary(int num){
        sal+=num;
    }
};
int main(){
    const Employee obj("Tanishque",124,12000);
    obj.display();
    const Employee obj2=obj;
    // obj.salary(123);
}