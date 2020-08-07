#include <bits/stdc++.h>
int main(){
	
	int i,n;
	
	scanf("%d", &n);
	
	if(n!=1){
		printf("I hate that ");
	}else{
		printf("I hate it\n");
		return 0;
	}
	
	for(i=2; i<n-1;i++){
		if(i%2==0){
			printf("I love that\n");
		}else{
			printf("I hate that\n");
		}
	}
	
	if(i%2==0){
		printf("I love it\n");
	}else{
		printf("I hate it\n");
	}
	
	return 0;
}
	
	
	
