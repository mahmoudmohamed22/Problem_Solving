#include <bits/stdc++.h>
#define fastcin ios_base::sync_with_stdio(false)\
                            ;cin.tie(NULL) 
using namespace std;
const int N=1e6+5;

int main()
{    int a[405][405]={0};
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        int x1,y1,x2,y2;
         for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i][j]=='*'){
                    x1=i; y1=j;
                }
            }
        }




    }



    return 0;
}
