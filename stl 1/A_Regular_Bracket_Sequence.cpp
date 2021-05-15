#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    stack<char>st;
    int mm=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(')
        {
            st.push('(');
            

        }else 
        {
            if(!st.empty())
            {
                st.pop();
                mm=mm+2;
            }
        }

       
    }
    cout<<mm;
}