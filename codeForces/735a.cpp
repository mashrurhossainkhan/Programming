Copy
#include <bits/stdc++.h>
int main(){
	int n,k,G,T,i;
	char a[103];
	scanf("%d%d", &n, &k);  
	scanf("%s",a);
	for(i=n-1;i>=0;i--){
		if(a[i]=='G'){
			G=i;
		}
		if(a[i]=='T'){
			T=i;
		}
	}
	if(G>T){
		while(G>T){
		G-=k;
		if(a[G]=='#'){
			break;
		}
		}
		if(G==T){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}else if(G<T){
			while(G<T){
				G+=k;
				if(a[G]=='#'){
				break;
				}
			}
			if(G==T){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
		}
		
	          
}
