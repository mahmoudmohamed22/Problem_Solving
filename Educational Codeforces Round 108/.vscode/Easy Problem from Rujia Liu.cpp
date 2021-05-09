#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<vector<int>>v;
   
    int n,m;
    
    int k,vv;
    int x;
    	while (scanf("%d %d", &n, &m) != EOF) {
		v.assign(1000000, vector<int>());

		for (int i = 1; i <= n; i++) {
			cin>>x;
        v[x].push_back(i);
		}
        }
    
    while(m--)
    {
        cin>>k>>vv;
        if(k-1>v[vv].size()){
            cout<<"0"<<"\n";
        }else 
        {
            cout<<v[vv][k-1]<<"\n";
        }

    }
    return 0;
}
/*

#include <cstdio>
#include <vector>
using namespace std;

int main() {
	int n, m, d, k;
	vector<vector<int> > v;
	while (scanf("%d %d", &n, &m) != EOF) {
		v.assign(1000000, vector<int>());

		for (int i = 1; i <= n; i++) {
			scanf("%d", &d);
			v[d].push_back(i);
		}

		for (int i = 0; i < m; i++) {
			scanf("%d %d", &k, &d);

			if (k - 1 < v[d].size())
				printf("%d\n", v[d][k - 1]);
			else
				printf("0\n");
		}
	}

	return 0;
}*/