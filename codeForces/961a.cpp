#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,m,i,mot[10000],j,a1[10000],k,min=0;
	
	cin>>n>>m;
	
	for(i=1; i<=m ; i++){
		scanf("%lld", &mot[i]);
		for(k=1; k<=n; k++){
			if(mot[i]==k){
				a1[k]++;
				
			}
		}
	}
	min=a1[1];
	for(j=1; j<=n; j++){
		if(min>a1[j])min=a1[j];
	}
	
	cout<<min<<endl;
}
