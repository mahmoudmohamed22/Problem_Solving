#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    set<int>st;
    vector<int>v;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
        if(x!=0){
        st.insert(x);}
    }
    cout<<st.size();

}