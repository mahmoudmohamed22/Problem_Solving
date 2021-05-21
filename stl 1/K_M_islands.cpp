#include <bits/stdc++.h>
using namespace std;
int main() {
    int m,n;
    cin>>m>>n;
    set<int>st;
    int l,r;
    while (m--)
    {
        cin>>l>>r;
        for(int i=l;i<=r;i++)
        st.insert(i);
        
    }
    int q;
    cin>>q;
    int x,y;
   bool b=false;
    while (q--)
    {
        cin>>x>>y;
        l=min(x,y);
        r=max(x,y);
        for(int i=l;i<=r;i++)
        {
            if(!st.count(i)){
                cout<<"NO\n";
                b=true;
                break;
            }
        }
        if(!b)
        cout<<"YES\n";

        b=false;
        
        
    }
    
    
}