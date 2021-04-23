#include <bits/stdc++.h>
#define fastcin ios_base::sync_with_stdio(false)\
                            ;cin.tie(NULL) 
using namespace std;
int  ps(int x,int n,int c )
{
    if(pow(c,n)<x)
    {
      return  ps(x,n,c+1)+ ps((x-pow(c,n)),n,c+1);
    }else if (pow(c,n)==x){
    return 1;
    }else {
    return 0;
    }
}
int main()
{
    int n,p;
    cin>>n;
    cin>>p;
    int c=1;
    int res;
    res=ps(n,p,c);
  cout<<res<<"\n";
    return 0;
}
