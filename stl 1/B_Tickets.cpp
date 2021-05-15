#include <bits/stdc++.h>
using namespace std;
// 10 20 
int main() {
    int n;
    queue<int>q;
    int a,x;
    cin>>n;
    while (n--)
    {
        cin>>a>>x;
        if(a==1)
        {
              q.push(x);
        }else
        {
            if(q.front()==x)
            {
                cout<<"Yes\n";
            }else
            {
                cout<<"No\n";
            }
            
            if(!q.empty())
            {
            q.pop();
            }
        }
        
    }
    
}