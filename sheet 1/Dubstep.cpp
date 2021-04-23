#include <bits/stdc++.h>
 
using namespace std;
 
int main(void)
{
string s;
cin>>s;
for(int i=0;i<s.size();i++){
    if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
        s[i]=' ';
        s[i+1]=' ';
        s[i+2]=' ';
 
    }
}

string s2;
for(int i=0;i<s.size();i++){
    if(s[i]!=' '){
        s2+=s[i];
        if(s[i+1]==' '){
            s2+=' ';
        }
    }
}
cout<<s2<<"\n";
return 0;
}