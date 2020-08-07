#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,p,q,count=0;;
	
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++){
		scanf("%d %d", &p, &q);
		
		if((q-p)>=2) count++;
	}
	
	cout<<count<<endl;
	
	return 0;
}
