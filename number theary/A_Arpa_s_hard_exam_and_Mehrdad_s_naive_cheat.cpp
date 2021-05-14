#include <bits/stdc++.h>
using namespace std;
int main() {
    int ll[]={8,4,2,6};
    int n;
    cin>>n;
   
        if(n==0){
        cout<<"1\n";
    }else 
    {
        n=n-1%4;
        cout<<ll[n]<<"\n";

    }
    
    
    
}