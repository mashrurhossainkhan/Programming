#include <bits/stdc++.h>
int main(){
	
	int a[100],i,s,max=0,j,extra=0,add=0;
	
	scanf("%d", &s);
	
	
	for(i=0; i<s; i++){
		scanf("%d", &a[i]);
		
		if(max<=a[i]){
			max=a[i];
			
		}
		
	}
	
	for(j=0; j<s; j++){
		
		if(a[j]<=max){
			extra=max-a[j];
			
		}
		add+=extra;
		
	}
	printf("%d\n",add);

	return 0;
}
