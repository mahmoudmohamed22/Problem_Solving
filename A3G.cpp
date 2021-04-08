#include <bits/stdc++.h>

using namespace std;
void printCards(int x){
    queue<int>q;
    bool bo=false;
    if(x!=0){
    for(int i=1;i<=x;i++){
        q.push(i);
    }
    string s="";
    cout<<"Discarded cards:";
   while(q.size()>1)
    {
       if(!bo)
       {
         cout<<" "<<q.front();
         bo=true;
         q.pop();
       }else {
           cout<<",";
       q.push(q.front());
       q.pop();
       bo=false;

       }


    }
    cout<<"\n";
    cout<<"Remaining card:"<<" "<<q.front()<<"\n";

q.pop();}


}
int main()
{    int a[55]={0};
    int n;
    int i=0;

    do
    {
        cin>>a[i];

    }while(a[i++]!=0);

    for(int j=0;j<i;j++){
          printCards(a[j]);
    }


    return 0;
}

