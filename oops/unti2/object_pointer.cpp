#include <bits/stdc++.h>
using namespace std;
class student{
    public:
 int num;
    student(int n):num(n){
        
    }
};
void display( student*p){
    p->num=13;
}
int main() {
	// your code goes here
	 student st{10};
	display(&st);
	cout<<st.num;
}