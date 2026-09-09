#include <bits/stdc++.h>
using namespace std;
class operation{
    public:
    int sum=0;
    operation(){
        cout<<"Vikas Choudhary"<<endl;
    }
    operation(int a,int b){
        sum=a+b;
        cout<<sum<<"is the sum"<<endl;
    }
    operation(const operation &s){
        cout<<"Previous sum"<<s.sum;
    }
    ~operation(){
        cout<<"Destructor called"<<endl;
    }
};
int main(){
    operation st;
    operation st1(10,20);
    operation st2=st1;

}