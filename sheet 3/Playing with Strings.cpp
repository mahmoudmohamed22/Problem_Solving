#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    int n;
    string s,r;
    int fs[2]={0};
    int fr[2]={0};
     bool b=false;
    while(t--){
        cin>>n;
        cin>>s>>r;
        for(auto ch:s ){
            if(ch=='0')
            fs[0]++;
            if(ch=='1')
            fs[1]++;
        }
          for(auto ch:r)
          {
            if(ch=='0')
            fr[0]++;
            if(ch=='1')
            fr[1]++;
        }
        if(fr[0]!=fs[0] || fs[1]!=fr[1]){
            cout<<"NO"<<"\n";
            b=true;
        }
        if(!b){
        cout<<"YES"<<"\n";
        b=false;
        }
        b=0;
        fr[0]=0;fs[0]=0;
        fr[1]=0;fs[1]=0;

    }
}