#include <bits/stdc++.h>
using namespace std;
class Student
{
private:
    int roll, phy, chem, math;
    string name;

public:
    Student(string n, int r, int p, int c, int m)
    {
        name = n;
        roll = r;
        phy = p;
        chem = c;
        math = m;
    }
    void display()
    {
        cout << "Student name is" << name << endl;
        cout << "Student roll no " << roll << endl;
        cout << "Mark in Physic " << phy << endl;
        cout << "Mark in Chemistry " << chem << endl;
        cout << "Mark in Maths " << math;
    }
};
int main()
{
    Student st("Tanishque", 208, 89, 96, 92);
    st.display();
}