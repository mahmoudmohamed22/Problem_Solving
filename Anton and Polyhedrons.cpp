#include <iostream>

using namespace std;

int main()
{    string s[5]={"Tetrahedron","Cube","Octahedron","Dodecahedron","Icosahedron"};
    int face [5]={4,6,8,12,20};
    int freq [5]={0};
    string ss;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ss;
        for(int j=0;j<5;j++){
            if(ss==s[j]){
                freq[j]++;
            }
        }

    }


    long long int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+face[i]*freq[i];
    }
    cout<<sum;
    return 0;
}
