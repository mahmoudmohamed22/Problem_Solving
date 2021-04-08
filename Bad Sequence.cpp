#include <bits/stdc++.h>
const int  N=3e5+1;
using namespace std;

int main()
{   stack<char>st;
    vector<char>vect;
    int x;
    string s;
    cin>>x;
    cin>>s;
    if(x%2!=0)
    {
    cout<<"No";
    return 0;
    }else
    {
        for(int i=0;i<s.size();i++)
        {
        if(s[i]=='('){
            st.push(s[i]);
        }else{
                   if(!st.empty())
                    {
                     st.pop();
                    }else
                    {
                    vect.push_back(s[i]);
                    }

        }
        }
    }
    if(st.empty() && vect.size()==0){
        cout<<"Yes";
        return 0;
    }else
    {
        if(vect.size()>1){
            cout<<"No";
            return 0;
        }else
        {
            if(vect.size()==1 &&st.size()==1)
           {
            cout<<"Yes";
            return 0;
            }else{
             cout<<"No";
            return 0;
            }

        }
    }






    return 0;
}
