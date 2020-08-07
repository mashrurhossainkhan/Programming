#include <bits/stdc++.h>
int main(){
	
	int a,b;
	
	scanf("%d %d", &a, &b);
	
	if(a==0&&b==0){
		printf("NO\n");
	}
	
	 else if(b==a+1||a==b+1||a==b){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	
	return 0;
	
}
