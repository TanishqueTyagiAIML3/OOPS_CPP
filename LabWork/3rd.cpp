#include <bits/stdc++.h>
using namespace std;
void display(vector<int>arr)
{
    cout<<"Salary : "<<endl;
    for(auto i:arr)
    cout<<i<<" ";
    cout<<endl;
}
int total_sal(vector<int>arr)
{
    int total=0;
    for(auto i:arr)
    {
        total+=i;
    }
    return total;
}
void max_sal(vector<int>arr)
{
    int m=arr[0];
    for(auto i:arr){
        m=max(i,m);
    }
    cout<<"Max salary: "<<m<<endl;
}
void  avg_sal(vector<int>arr){
    int total=total_sal(arr);
    cout<<"Average Salary:"<<total/arr.size()<<endl;
}
void count(vector<int>arr){
    int count=0;
    for(auto i:arr){
        if(i>50000)
        count++;
    }
    cout<<"Salary Greater than 50k : "<<count<<endl;
}
int main(){
    int size;
    cin>>size;
    vector<int>arr(size,0);
    for(int i=0;i<size;i++)
    {
        int val;
        cin>>val;
        arr[i]=val;
    }
    display(arr);
    cout<<"Total Salary :"<<total_sal(arr)<<endl;
    max_sal(arr);
    avg_sal(arr);
    count(arr);
}