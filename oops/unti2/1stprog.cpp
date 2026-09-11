#include <bits/stdc++.h>
using namespace std;
class Vikas{
    public:
    string name;
    Vikas(){
        cout<<"Vivek"<<endl;
    }
    void input(string n);
    //object as argument and address of object 
    void display(Vikas &v){
        v.name="Hello";
    }
};
void Vikas::input(string n){
    name=n;
}//function declare using scope resoltion
int main() {
	// your code goes here
	Vikas v{};
	v.input("Vivek");
	Vikas v2;
	v2.display(v);
	cout<<v.name;
}
