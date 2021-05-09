#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
 int pos[N];
 int n,c;
bool ck(int dis)
{
    int prevs=-1;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(prevs==-1 || pos[i]-prevs>=dis){
            prevs=pos[i];
            cnt++;
        }
    }
    return cnt>=c;
}
int main() {
    int t;
    cin>>t;
   
   
    while(t--)
    {
        cin>>n>>c;
        for(int i=0;i<n;i++){
            cin>>pos[i];
        }
        sort(pos,pos+n);
        int st=1,en=1e9,mid;
        while (st<en)
        {
            mid =(st+en+1)/2;
            if(ck(mid)){
               st=mid;
            }
            else
            {
                en=mid-1;
            }
        }
        cout<<st<<"\n";
        
    }
}