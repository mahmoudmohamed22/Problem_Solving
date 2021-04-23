#include <bits/stdc++.h>
#define fastcin ios_base::sync_with_stdio(false)\
                            ;cin.tie(NULL) 
using namespace std;
const int N=1e6+5;

int main()
{    
    string s1,s2;
    deque<char>dq;
    deque<char>dqout;
    cin>>s1>>s2;
    for(int i=0;i<s2.size();i++){
        dq.push_back(s2[i]);
    }
    for(int i=0;i<s1.size();i++){
        dqout.push_back(s1[i]);
    }
    int nl,nr;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]=='|') nl=i;
    }
    nr=s1.size()-nl-1;
     if(s1.size()==1 &&s2.size()%2==0)
     {

                                for(int i=0;i<=dq.size()/2;i++)
                        {    if(!dq.empty()){
                            dqout.push_back(dq.front());
                            dq.pop_front();}
                        }
                                 for(int i=0;i<=dq.size();i++)
                        {    if(!dq.empty()){
                            dqout.push_front(dq.front());
                            dq.pop_front();}
                        }
                         for(auto a:dqout){
        cout<<a;
    }
    cout<<"\n"; 
    return 0;
     }else if(s2.size()%2!=0 && s1.size()==1){
         cout<<"Impossible"<<"\n";
        return 0;
     }
    

    if(abs(nl-nr)>s2.length())
    {
        cout<<"Impossible"<<"\n";
        return 0;
    }else
   {
       if(nl>nr){
           for(int i=0;i<abs(nl-nr);i++)
           {    if(!dq.empty()){
            dqout.push_back(dq.front()); 
            dq.pop_front();
            }
           }
           if(dq.size()%2!=0){
               cout<<"Impossible"<<"\n";
        return 0;
           }else 
           {
                                for(int i=0;i<dq.size()/2;i++)
                        {    if(!dq.empty())
                            dqout.push_back(dq.front());
                            dq.pop_front();
                        }
                                 for(int i=0;i<dq.size();i++)
                        {    if(!dq.empty())
                            dqout.push_front(dq.front());
                            dq.pop_front();
                        }
           }
           
       }
       else 
       {
             for(int i=0;i<abs(nl-nr);i++)
           {    if(!dq.empty())
            dqout.push_front(dq.front());
            dq.pop_front();
           }
          if(dq.size()%2!=0){
               cout<<"Impossible"<<"\n";
        return 0;
           }else 
           {
                                for(int i=0;i<dq.size()/2;i++)
                        {    if(!dq.empty())
                            dqout.push_back(dq.front());
                            dq.pop_front();
                        }
                                 for(int i=0;i<dq.size();i++)
                        {    if(!dq.empty())
                            dqout.push_front(dq.front());
                            dq.pop_front();
                        }
           }


       }
    }
    for(auto a:dqout){
        cout<<a;
    }
    cout<<"\n";

    




    return 0;
}

