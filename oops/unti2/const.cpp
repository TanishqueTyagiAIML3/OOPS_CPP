#include <bits/stdc++.h>
using namespace std;
void pointers(const int* const ptr);
class student{
    public:
    const int a;
    string s;
    student(int p,string name):a(p),s(name)//Initiazler List 
    {
    }
    string func() const{
        return s;
    }
};
int main(){
    int num=5;
    pointers(&num);
    cout<<num;
    const student st(10,"Vikas");
    cout<<st.func();
    cout<<st.a;
}

void pointers(const int * const ptr){
    int num=9;
    cout<<*ptr;
}
