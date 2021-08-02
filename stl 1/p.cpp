#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int i, j, k, l;
    int m, n;
    long a[40][40][40];

    for(i = 0; i < 40; i++)
        for(j = 0; j < 40; j++)
            for(k = 0; k < 40; k++)
                a[i][j][k] = 0;
    a[20][20][0] = 1;
    
    cin>>m;
    
    for(l = 0; l < m; l++)
    {
        cin>>n;
     for(i = 1; i < n + 1; i++)
		 for(j = 2; j < 38; j++)
			 for(k = 2; k < 38; k++)
				 a[j][k][i]=a[j+2][k][i-1]+a[j+1][k+1][i-1]+a[j-1][k+1][i-1]+a[j-2][k][i-1]+a[j-1][k-1][i-1]+a[j+1][k-1][i-1];

    cout<<a[20][20][n]<<"\n";
    }
}