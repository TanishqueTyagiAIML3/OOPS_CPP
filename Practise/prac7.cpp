#include <bits/stdc++.h>
using namespace std;
class student{
    public:
    int roll;string name;double cgpa;
    student(int r,string n)
    {
        roll=r;
        name=n;
    }
    student(int r,string n,double cg)
    {
        roll=r;
        name=n;
        cgpa=cg;
    }
    void updatecgpa(double c){
        this->cgpa+=c;
    }
    class Address{
        public:
        string city,state;
         Address(string c,string s){
            city=c;
            state=s;
        }
         void display(){
            cout<<"City"<<this->city<<endl;
            cout<<"State"<<this->state;
        }
    };
    void display(){
        cout<<this->name<<endl;
        cout<<this->roll<<endl;
        cout<<this->cgpa;
    }
};
int main(){
    student arr[5]={student(123,"Tanishque",10),student(123,"Tanishque",10),student(123,"Tanishque",10),student(123,"Tanishque",10),student(123,"Tanishque",10)};
    arr[0].updatecgpa(10);
    student::Address a("Ghaziabad","UP");
    a.display();
}
