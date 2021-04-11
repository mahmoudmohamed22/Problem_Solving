#include <bits/stdc++.h>
using namespace std;
int main() 
{
     long long sum= 0;
     int N=10;
     long  a[N+5]={0};
     int n;
     cin>>n;
     for(int  i=0;i<n;i++)
{
    cin>>a[i];
    sum+=a[i];
}
cout<<sum<<"\n";

    return 0;
}