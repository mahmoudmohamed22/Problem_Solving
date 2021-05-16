#include <bits/stdc++.h>
using namespace std;
int main() 
{   deque<int>dq;
    string s;
    cin>>s;
    if(s.size()==1)
    {
        cout<<"No";
        return 0;
    }
    else
    {  
        if(s.size()%2!=0){
            cout<<"No";
        }else
        {
        for(int i=0;i<s.size();i++)
        {
            dq.push_back(s[i]);
        }
        if(dq.front()==dq.back()){
            cout<<"Yes";
        }else
        {
            cout<<"No";
        }
        }

    }
}