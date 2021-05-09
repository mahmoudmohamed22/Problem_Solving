#include <bits/stdc++.h>
using namespace std;
int a[200005]={0};
int b[200005]={0};
int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,k,q;
    cin>>n>>k>>q;
    int l,r;
    for(int i=0;i<n;i++){
        cin>>l>>r;
        a[l]++;
        a[r+1]--;
    }
    for(int i=1;i<200005;i++){
        a[i]=a[i]+a[i-1];
    }
     for(int i=1;i<200005;i++){
        if(a[i]>=k)
        b[i]=1;
        else 
        b[i]=0;
    }
     for(int i=1;i<200005;i++){
        b[i]=b[i]+b[i-1];
    }
    int aa,bb;
    while (q--)
    {
        cin>>aa>>bb;
        cout<<b[bb]-b[aa-1]<<"\n";
    }
    
return 0;
}