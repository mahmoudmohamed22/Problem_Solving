#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int c=0;

    for(int i=0;i<s.size();i++)
    {
        if(isupper(s[i])) c++;
    }
    int l=s.size()-c;
    if(c>l){
        for(int i=0;i<s.size();i++)
        {
            if(!isupper(s[i])){
                s[i]-=32;
            }
        }
        cout<<s<<"\n";
    }else {
        for(int i=0;i<s.size();i++)
        {
            if(isupper(s[i])){
                s[i]+=32;
            }
        }
        cout<<s<<"\n";

    }

}