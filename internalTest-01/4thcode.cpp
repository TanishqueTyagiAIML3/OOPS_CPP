#include <bits/stdc++.h>
using namespace std;
double area(int side)
{
    return pow(side, 2);
}
double area(double l, double b)
{
    return l * b;
}
float simpleInterest(int p, int t, int r = 5)
{
    return (p * r * t) / 100.0;
}
int main()
{
    cout << "Enter Side of Square" << endl;
    int side;
    cin >> side;
    cout << "Area of Square:" << area(side) << endl;
    cout << "Enter length and breath of recctangle" << endl;
    double len, brth;
    cin >> len >> brth;
    cout << "Area of Rectangle " << area(len, brth) << endl;
    cout << "Enter Principal amt , time" << endl;
    int p, t;
    cin >> p >> t;
    cout << "Simple Interest" << simpleInterest(p, t);
}