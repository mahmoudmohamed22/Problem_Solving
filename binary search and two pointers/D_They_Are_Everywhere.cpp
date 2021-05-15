#include <bits/stdc++.h>
using namespace std;
set<char>st;
int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int maxm=-1;
    for(int i=0;i<s.size();i++)
    {
        st.insert(s[i]);
        for(int j=i+1;j<s.size();j++)
        {
            if(!st.count(s[j]))
            {
                st.insert(s[j]);
                        if(maxm<st.size())
                        {
                               maxm=st.size();
                        }
            }else
            {
                st.clear();
                break;
            }

        }
    }
    cout<<maxm<<"\n";
    
    
    
}