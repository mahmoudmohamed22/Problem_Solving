#include <bits/stdc++.h>
using namespace std;
int main() {
      int freq[30]={0};
    int n;
    string s;
    cin>>n;
    cin>>s;
    for(int i =0;i<s.size();i++)
    {
        if(isupper(s[i]))
        {
s[i]=tolower(s[i]);
        }
        freq[s[i]-97]++;
    }
       for(int i =0;i<26;i++)
    {
        if(freq[i]==0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"yes";
  

}