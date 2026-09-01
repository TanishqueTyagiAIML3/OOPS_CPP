#include <bits/stdc++.h>
using namespace std;
class BankAccount{
    private:
    int acct;
    int balance;
    public:
    BankAccount(int num,int bal){
        acct=num;
        balance=bal;
    }
    friend void display(BankAccount st,BankAccount st1);
};
void display(BankAccount st,BankAccount st1){
    if(st.balance>st1.balance)
    cout<<st.acct<<"has balance high";
    else if(st.balance<st1.balance)
    cout<<st.acct<<"has high balance";
    else
    cout<<"Equal Balance";
}
int main(){
    BankAccount obj(1234,21);
    BankAccount obj1(123,32);
    display(obj,obj1);
}


