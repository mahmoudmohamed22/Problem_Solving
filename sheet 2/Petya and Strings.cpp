#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1,s2;
    cin>>s1>>s2;
      for(int i=0;i<s1.size();i++)
        {
            if(isupper(s1[i])){
                s1[i]+=32;
            }
        }
for(int i=0;i<s2.size();i++)
        {
            if(isupper(s2[i])){
                s2[i]+=32;
            }
        }


    if(s1==s2){
        cout<<"0"<<"\n";
    }else if (s1>s2){
        cout<<"1"<<"\n";
    }else {
       cout<<"-1"<<"\n";
    }

}