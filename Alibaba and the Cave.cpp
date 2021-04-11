#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    long long int d;
    cin>>a>>b>>c>>d;


         if(abs(a-b*c)==d){
        cout<<"YES";
        return 0;
        }else if(a+b*c==d){
          cout<<"YES";
        return 0;
        }else if(a*b+c==d){
          cout<<"YES";
        return 0;
        }else if (a*b-c==d){
          cout<<"YES";
        return 0;
        }else if (a+b+c==d){
          cout<<"YES";
        return 0;
        }else if (a-b-c==d){
          cout<<"YES";
        return 0;
        }else if (a+b-c==d){
          cout<<"YES";
        return 0;
        }else if (a-b+c==d){
cout<<"YES";
        return 0;
        }
    cout<<"NO";
    return 0;
}
