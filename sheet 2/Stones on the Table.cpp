#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    string s;
    cin>>s;
    int R=0,B=0,G=0;
    cout<<"\n";
    for(int i=0;i<n-2;i++)
    {    
        if(s[i]==s[i+1])
        {
            R++;
        }
    }
    cout<<R<<"\n";
    
}