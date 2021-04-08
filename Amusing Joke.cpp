#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2,st;
    cin>>s1;
    cin>>s2;
    cin>>st;
    int a12[101]={0};
    int aT[101]={0};
    int x1,x2,xt;
    x1=s1.size();
    x2=s2.size();
    xt=st.size();
    if(x1+x2!=xt){
        printf("NO");
        return 0;
    }
    for(int i=0;i<x1;i++){
        a12[s1[i]-'A']++;

    }

     for(int i=0;i<x2;i++){
        a12[s2[i]-'A']++;

    }


    int c1=0;
     for(int i=0;i<xt;i++){
        aT[st[i]-'A']++;


    }

     for(int i=0;i<101;i++)
        {

            if(a12[i]==aT[i])
                {
            }else{
             printf("NO");
        return 0;
            }




    }/*
if(c1==c){
     printf("YES");}
     else {
      printf("NO");
     }
     */
     printf("YES");

    return 0;
}
