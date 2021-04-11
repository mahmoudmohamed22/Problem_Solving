#include <bits/stdc++.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{  int n;
 int a[100]={0};
    cin>>n;
    string s1,s2,s3;

    for(int i=0;i<n;i++){
      cin>>s1>>s2>>s3;
      int x= stoi(s2);
      int y=stoi(s3);
      if(x<y && x>=2400){
        a[i]=1;
      }
    }

    for(int i=0;i<n;i++){
        if(a[i]==1){
            printf("YES");
            return 0;
        }

    }
printf("NO");
    return 0;
}
