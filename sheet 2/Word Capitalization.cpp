#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    if(isupper(s[00])){
        cout<<s<<"\n";
    }else {
        s[0]-=32;
        cout<<s<<"\n";
    }
}