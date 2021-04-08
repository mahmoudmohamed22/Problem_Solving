#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[100000];
    map<long long ,int >m;
    queue<long long >q;
    int x;
    while(cin>>x ){

        if(m.find(x)==m.end()){
            q.push(x);
        }
        m[x]+=1;

    }
    while(q.size()){
        cout<<q.front()<<" "<<m[q.front()]<<"\n";
        q.pop();
    }
    return 0;
}
