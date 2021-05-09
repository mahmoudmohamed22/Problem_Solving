#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    int l;
    string s;
     bool vist[27]={0};
     bool b=false;
    while (t--)
    {
        cin>>l;
    cin>>s;
   vist[s[0]-65]=true;
    for(int i=1;i<=s.size();i++)
    {
        if(s[i]!=s[i-1]){
            if(vist[s[i]-65]==false){
            vist[s[i]-65]=1;
            }
            else {
                cout<<"NO"<<"\n";
                b=true;
                break;
            }
        }else{
               vist[s[i]-65]=1;
        }
    }
   
    if(!b){
        cout<<"YES\n";
    }
    b=false;
    for(int i=0;i<27;i++)
    {
        vist[i]=0;
    }
    
    }
    

}