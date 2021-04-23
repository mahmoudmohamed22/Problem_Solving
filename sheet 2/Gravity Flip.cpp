#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    vector<int>v;
    cin>>n;
    int y;
    for(int i=0;i<n;i++)
    {    cin>>y;
        v.push_back(y);
    }
    sort(v.begin(),v.end());
    for(auto x:v)
    {
        cout<<x<<" ";
    }
}