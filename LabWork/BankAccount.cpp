#include <bits/stdc++.h>
using namespace std;
class BankAccount{
    private:
    int balance=0;
    public:
    void deposite(int val){
        balance+=val;
    }
    bool check(int val){
        return balance-val>=0;
    }
    void withdraw(int val){
        if(check(val))
        {
        balance-=val;
        cout<<"Remain Balance:"<<balance;
        }else
        cout<<"Insufficient Balance";
    }
};
int main(){
    BankAccount st;
    st.deposite(5000);
    st.withdraw(3000);
    return 0;
}