#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    int n;
    vector<int>v;
    int freq[105]={0};
    cin>>t;
    int x;
    int index=0;
    while (t--)
    {
        cin>>n;
        cin>>x;
            v.push_back(x);
        for(int i=1;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
            if(v[i-1]!=x){
                index=i-1;
            }
            if(v[n-1]!=v[0] && index!=0){
                index=i;
            }

        }
        cout<<index+1<<"\n";
        index=0;
        v.clear();
        
}
}