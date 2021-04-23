#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    int n;
    string s;
    int c=1;
    int co=0;
    while(t--)
    {
        cin>>n;
        cin>>s;
         cout<<"case"<<" "<<"#"<<c<<":"<<" ";
        for(int i=0;i<s.size();i++){
                      if(s[i]=='A' || s[i]==s[i-1]){
                          co=1;
                            cout<<co<<" ";
                      }else{
                          co++;
                       cout<<co<<" ";
                       }
        }
        cout<<"\n";
        co=0;
        c++;

    }
}