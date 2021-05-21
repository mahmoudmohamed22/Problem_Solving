#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1,s2;
    cin>>s1;
    cin>>s2;
    string ss;
     string sc;

    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]=='[' || s1[i]==']')
        {
            if(s1[i]=='[')
            {
                int c=i;
                while(s1[c]!=']'){
                    c++;
                    ss=ss+s1[c];
                //    s1[c]=' ';

                }
                
            }
            s1[i]=' ';
            
        }
        
    }
    for(int i=0;i<ss.size()-1;i++)
        {
          sc=sc+ss[i];
        }
        int count=0;
        for (int i = 0; s1[i]; i++)
        if (s1[i] != ' ')
            s1[count++] = s1[i];
    cout<<sc<<"\n";
    cout<<s1<<"\n";

}