
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    set<char>se;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        se.insert(s[i]);
    }
    if(se.size()%2==0){
cout<<"CHAT WITH HER!"<<"\n";
    }else{
cout<<"IGNORE HIM!"<<"\n";
    }
    return 0;
}