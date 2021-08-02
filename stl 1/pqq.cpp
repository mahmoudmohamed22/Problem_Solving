#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    int x1,y1,r1,x2,y2,r2;
     double dis;
    while (t--)
    {    
        cin>>x1>>y1>>r1>>x2>>y2>>r2;
        dis=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
        if((dis==(r1+r2)) || (dis==(max(r1,r2)-min(r1,r2)))){
            cout<<"E\n";
        }else if (dis <(max(r1,r2)-min(r1,r2)) )
        {
           cout<<"I\n";
        }else
        {
             cout<<"O\n";
        }
        dis=0;

    }
    

}