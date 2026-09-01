#include <bits/stdc++.h>
using namespace std;
class product
{
public:
    string name;
    int price;
    product(string n, int prc)
    {
        name = n;
        price = prc;
    }
};
product higherProfit(product p1, product p2)
{
    if (p1.price > p2.price)
        return p1;
    else
        return p2;
}
int main()
{
    product p1("Mango", 130);
    product p2("Apple", 100);
    auto final = higherProfit(p1, p2);
    cout << "Name " << final.name << endl;
    cout << "Price " << final.price;
}