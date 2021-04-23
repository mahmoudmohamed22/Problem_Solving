
#include <bits/stdc++.h>
using namespace std;
int a[55]={0};
int main() {
  int n;
  string s;
  scanf("%d",&n);
  n=n+1;
  string s1="";
  while(n--)
  {
      
      getline(cin,s);

      for(int i=0;i<(s.size()+2);i++)
      {
          if(i==0) s1+="+";
          else
          s1+="-";
      }
  }
  cout<<s<<"\n";
  cout<<s1<<"\n";
    return 0;
}