#include <bits/stdc++.h>
using namespace std;
void callbyvalue(int a, int b)
{
    cout << "Value before Swap" << a << " " << b << endl;
    int x = 0;
    x = a;
    a = b;
    b = x;
    cout << "Value after Swap" << a << " " << b << endl;
}
void callbyreference(int *a, int *b)
{
    int x = 0;
    x = *a;
    *a = *b;
    *b = x;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "Call By Value :" << endl;
    callbyvalue(a, b);
    cout << "Call By Reference:" << endl;
    cout << "Value before swap " << a << " " << b << endl;
    callbyreference(&a, &b);
    cout << "Value after swap " << a << " " << b;
    return 0;
}