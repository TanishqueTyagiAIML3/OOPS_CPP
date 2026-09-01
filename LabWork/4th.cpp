#include <bits/stdc++.h>
using namespace std;
class Bank{
    private:
    int balance=0;
    public:
    void deposite(int val){
        balance+=val;
    }
    bool isvalid(int val){
        return balance-val>0;
    }
    void withdraw(int val){
        if(isvalid(val))
        balance-=val;
        else{
            cout<<"withdraw amt is greater than balance"<<endl;
        }
    }
    void showbalanc()
    {
        cout<<"Remaing Balance"<<balance<<endl;
    }
};
int main(){
    Bank st;
    st.deposite(1000);
    st.withdraw(2000);
}