#include <bits/stdc++.h>
using namespace std;
class Marks
{
private:
    int arr[5];

public:
    void input()
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
        }
    }
    void display()
    {
        cout << "Marks :";
        for (auto i : arr)
            cout << i << " ";
    }
    friend void totalMarks(Marks st);
};
void totalMarks(Marks st);
int main()
{
    Marks st;
    st.input();
    st.display();
    totalMarks(st);
}
void totalMarks(Marks st)
{
    int total = 0;
    for (auto i : st.arr)
    {
        total += i;
    }
    cout << "total Marks" << total;
}