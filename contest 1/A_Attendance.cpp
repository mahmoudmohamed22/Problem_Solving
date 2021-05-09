#include <bits/stdc++.h>
using namespace std;
char s[5][5];
int C(int x,int y)
{
	return s[x][y]=='#';
}
int main()
{
	for(int i=0;i<4;i++ )
    {
        
    for(int j=0;j<4;j++ )
    {
        cin>>s[i][j];
    }
    }
		
	for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
			if(C(i,j)+C(i+1,j)+C(i,j+1)+C(i+1,j+1)!=2)
			{
				cout<<"YES";
				return 0;
			}
        }
		}
	cout<<"NO";
}