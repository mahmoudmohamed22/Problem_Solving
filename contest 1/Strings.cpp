
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s,ss;
    cin>>s>>ss;
    char ch=' ';
    int l1=s.size();
    int l2=ss.size();
    cout<<l1<<" "<<l2<<"\n";
    cout<<s+ss<<"\n";
    ch=s[0];
    s[0]=ss[0];
    ss[0]=ch;
    cout<<s<<" "<<ss<<"\n";
    return 0;
}