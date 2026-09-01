#include <bits/stdc++.h>
using namespace std;
int count_per(vector<double>arr){
    int count=0;
    for(auto i:arr)
    {
        if(i>75)
        count++;
    }
    return count;
}
int main(){
    vector<double>per;
    cout<<"Enter the Percantage";
    for(int i=0;i<6;i++)
    {
        double val;
        cin>>val;
        per.push_back(val);
    }
    cout<<"Percentage of 6 student"<<endl;
    for(auto i:per){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Student having More than 75% : "<<count_per(per);
}