#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    int n;
    string s[1005];
    int f[27];
     int ff[500];
    map<char,int>mp;
   // int c=0;
    while (t--)
    {
        cin>>n;
        for(int c=0;c<n;c++){
            cin>>s[c];
            for(int i=0;i<26;i++)
            {
                cin>>f[i];
            }
            for(int i=0;i<s[c].size();i++)
            {   
                if('a'-s[c][i]>26)
                mp[s[c][i]]++;
            }

            for(int i=0;i<s[c].size();i++){
                if(mp.count(s[c][i])!=0){
                
             for (auto x : mp)
             if(x.first==s[c][i])
             {
                 for(int k=0;k<26;k++)
                 {
                 if(x.second==f[k])
                 {
                     cout<<char('a'+k);
                 }
                 }
             }
        
            }else
            {
                cout<<s[c][i];
            }
            }

        }
        cout<<"\n";

        
    }
    
}