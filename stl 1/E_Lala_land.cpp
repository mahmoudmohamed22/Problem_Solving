#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int x,a;
    int prevs=INT_MIN;
    long long sum=0;
    while (n--)
    {
        cin>>x>>a;
       
        if(x>prevs){
       sum+=a;
       prevs=x;
       }
       
           if(x<prevs){
       sum+=a;
       prevs=x;
       }
       


       
    }
    cout<<sum<<"\n";
    

}