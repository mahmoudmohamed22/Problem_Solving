#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a,sum=0;
    int arr[100]={0};
    int arrsum[100]={0};
    scanf("%d%d",&n,&a);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    /* code one */
    sum+=arr[a];
    for(int i=1;i<=n;i++){
        if( abs(arr[a-1]-arr[a-i-1])==abs(arr[a-1]-arr[a+i-1]) )
    }



    return 0;
}
