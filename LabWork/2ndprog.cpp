#include <bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    long long rollno;
    int per;
    void display(string n)
    {
        name=n;
        cout<<"Name: "<<name<<endl;
    }
    void display(long long roll,int p)
    {
        rollno=roll;
        per=p;
        cout<<"roll no "<<rollno<<endl<<"percentage "<<per<<endl;
    }
};
int main()
{
    student st;
    st.display("Tanishque");
    st.display(2503215300208,98);
}