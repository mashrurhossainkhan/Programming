#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[105],i,n;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<n-1; i++){
		if(abs(a[i]-a[i+1])>=2){
			printf("NO\n");
			return 0;
		}
	}
	
	printf("YES\n");
	
	return 0;
}
