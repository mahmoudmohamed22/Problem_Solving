#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int n1=1,n0=1;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]==s[i+1] && s[i]=='1'){
            n1++;
        }else {
            if(n1<7)
            n1=1;
        }
         if(s[i]==s[i+1] && s[i]=='0'){
            n0++;
        }else {
            if(n0<7)
            n0=1;
        }
    }
    
    if( (n1>n0 && n1>=7) || ( n0>n1 && n0>=7) ){
        cout<<"YES"<<"\n";

    }else {
        cout<<"NO"<<"\n";
    }
}