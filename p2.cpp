#include <bits/stdc++.h>
using namespace std;
const int N=1e5+100;
vector<long long >v(N,0);
long long ar[N];

void foo(){
    for(int i=1;i<10;i++){
        v.push_back(i);
    }
    long long num =11;
    for(int i=0;i<N;i++){
        
        v.push_back(num);
        if(num<100){
        num=num+11;
        if(num==110){
            num=111;
        }
        }
        else if(num<1000){
             num=num+111;
              if(num==1110){
            num=1111;}
        
        }else if(num<10000){
             num=num+1111;
             if(num==11110){
            num=11111;}
        }
         else if(num<100000){
             num=num+11111;
             if(num==111110){
            num=111111;}
        }
         else if(num<1000000){
             num=num+111111;
              if(num==1111110){
            num=1111111;}
        }
         else if(num<10000000){
             num=num+1111111;
             if(num==11111110){
            num=11111111;}
        }
         else if(num<100000000){
             num=num+11111111;
               if(num==111111110){
            num=111111111;}
             
        }
         else if(num<1000000000){
             num=num+111111111;
              if(num==1111111110){
            num=1111111111;}
        }
        else if(num<10000000000){
             num=num+1111111111;
              if(num==1111111110){
            num=1111111111;}
        }


        
        


    }
    sort(v.begin(),v.end()-1);
    int j=0;
    for(auto x:v){
        if(x>0 && x<1e9){
            ar[j]=x;
        }
        j++;
    }
}
int main() {
  int t;
  cin>>t;
  foo();
  sort(ar,ar+5000);
  for(int i=0;i<5000;i++){
      cout<<ar[i]<<" ";
  }
  
    
}