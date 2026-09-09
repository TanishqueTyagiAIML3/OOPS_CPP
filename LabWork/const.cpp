#include <bits/stdc++.h>
using namespace std;
class student{
    public:
    int mark;
    student(){
        cout<<"Hello";
    }
    student(int n)
    {
        mark=n;
    }
    student(const student &s)
    {
        mark=s.mark;
    }
    void show(){
        cout<<mark;
    }
};
int main(){
    student st(1);
    student s=st;
    s.show();
}