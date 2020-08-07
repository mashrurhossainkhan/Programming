#include <bits/stdc++.h>
int main(){
	while(true){
		
	int n,a,b,ans=0,baki=0,hi=0,x=0;
	
	scanf("%d %d %d", &n, &a, &b);
	
	ans=n-a;
	baki=ans-b;
	hi=baki-1;
	x=ans-hi;
	
	printf("%d\n",x);
}
	return 0;
}
