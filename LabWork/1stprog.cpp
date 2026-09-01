#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;long long rollno;int per;
    void input(string n,long long roll ,int p ){
     name=n;
     rollno=roll;
     per=p;
    }
    void display()
    {
        cout<<"Name is "<<name<<endl;
        cout<<"Roll-No "<<rollno;
    }
    string grade()
    {
        if(per>=90)
        return "Grade A";
        else if(per>=80 && per<90)
        return "Grade B";
        else if(per>=70 && per<80)
        return "Grade C";
        else
        return "Fail";
    }

};
int main()
{
student obj;
cout<<"Enter name and rollno";
string name;long long roll;
cin>>name;
cin>>roll;
cout<<"Entr the percentage ";
int per;
cin>>per;
obj.input(name,roll,per);
obj.display();
cout<<endl<<obj.grade();
}