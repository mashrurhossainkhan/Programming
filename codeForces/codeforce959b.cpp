Copy
#include <bits/stdc++.h>
using namespace std;


int main(){
	long long x,sum=0,n,k,g[100009],m,i,j,cost,same[100009],min=0;
	char a[1000009],b[1000009];
	
	map<string,long long>pa;
	map<long long,long long>pcost;
	map<long long,string>pb;
	
	
	cin>>n>>k>>m;
	
	for(i=1; i<=n; i++){
		scanf("%s", a);
		pa.insert(make_pair(a,i));
	}
	
	for(i=1; i<=n; i++){
		scanf("%lld", &cost);
		pcost.insert(make_pair(i,cost));

	}
	
	for(i=1; i<=k; i++){
		
		scanf("%lld", &x);
		
		for(j=1; j<=x; j++){
			min=0;
			g[j]=0;
			scanf("%lld",&same[j]);
			if(x>1){
				g[j]=pcost[same[j]];
				min=g[1];
					
				}
		}
		if(x>1){
			for(int h=1; h<=x; h++){
			if(min>g[h]) min = g[h];
		}
		for(int h=1; h<=x; h++){
			pcost[same[h]]=min;
			//cout<<pcost[same[h]]<<endl;
			}
		}
	}
	sum=0;
	for(i=1; i<=m; i++){
		scanf("%s", b);
		sum+=pcost[pa[b]];
		//cout<<pcost[pa[b]]<<" ";
		
	}
	
	cout<<sum<<endl;
	
	return 0;
}
