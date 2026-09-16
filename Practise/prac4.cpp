#include <bits/stdc++.h>
using namespace std;
class University{
    private:
    string name;
    public:
    University(string n)
    {
        name=n;
    }
    class Department{
        public:
        string dpname;
        int count;
        Department(string n,int c){
            dpname=n;
            count=c;
        }
        void show(University &obj){
            cout<<obj.name<<" "<<dpname<<" "<<count;
        }
    };
};
int main(){
    University obj("AKTU");
    University::Department obj1("AIML",180);
    obj1.show(obj);
}