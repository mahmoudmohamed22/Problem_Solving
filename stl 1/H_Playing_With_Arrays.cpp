#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    int n;
    cin>>t;
    deque<int>R;
    deque<int>A;
    while (t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++){
        R.push_back(i);
        }
        for(int i=1;i<=n;i++)
        {
              A.push_front(A.back());
             A.pop_back();
             A.push_back(A.front());
             A.pop_front();
            
             A.push_front(R.back());
             R.pop_back();
             

        }
        for(int i=0;i<n;i++){
            cout<<A.front()<<" ";
            A.pop_front();
        }

    }
    
}