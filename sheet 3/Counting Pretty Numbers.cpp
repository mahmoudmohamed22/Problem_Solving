#include <bits/stdc++.h>
using namespace std;
bool a[100005]={0};
int cum[100005]={0};
int main() {
    int t;
    cin>>t;
    int l,r;
    for(int i=1;i<100005;i++)
    {
        if(i%10==2 || i%10==9 || i%10==3)
        {
            a[i]=1;
        }
    }
    for(int i=1;i<100005;i++)
    {
       cum[i]=cum[i-1]+a[i];
    }
    while (t--)
    {
        cin>>l>>r;
        cout<<cum[r]-cum[l-1]<<"\n";
    }
    
}