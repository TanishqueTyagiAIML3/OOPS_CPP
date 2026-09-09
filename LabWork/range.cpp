#include <bits/stdc++.h>
using namespace std;
class Rangeloop{
    public:
    void display(vector<int> arr){
        for(auto i:arr)
        cout<<i<<" ";
    }
};
int main(){
    Rangeloop st;
    int size;
    vector<int>arr;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        int val;
        cin>>val;
        arr.push_back(val);
    }
    cout<<"Display Array:"<<endl;
    st.display(arr);
    return 0;
}