#include <bits/stdc++.h>
using namespace std;
class Vikas{
    public:
    string n;
    Vikas(string name){n=name;}
};
Vikas higherlength(Vikas st,Vikas pt){
    if(st.n.length()>pt.n.length())
    return st;
    else
    return pt;
}
int main(){
    Vikas v("Vivek");
    Vikas p("Modinagar");
    cout<<higherlength(v,p).n<<" is higher length";
}
