#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    int r,b,d;
    cin>>t;
    while (t--)
    {
        cin>>r>>b>>d;
       
        if(b==1 || r==1)
        {
            if(abs(r-b)>d){
                cout<<"NO"<<"\n";
            }else
            {
                cout<<"YES"<<"\n";
            }
        }
        else if(d==0 && r!=b)
        {
            cout<<"NO"<<"\n";

        }else if(d==0 && r==b){
            cout<<"YES"<<"\n";
        }else 
        {
            int minm=min(r,b);
            
            int x=0,y=0,z,o,k=0;
            z=max(r,b);
           while(x<=minm){
               x++;
               y=max(r,b)/minm;
               o=z-y-k;
               k=0;
               
               if(abs(1,z)>d){
                   cout<<"NO";
                   break;
               }

           }
                
        }
        
    }
    
}