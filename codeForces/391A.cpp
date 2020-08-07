#include <bits/stdc++.h>
int main(){
	
	char a[100];
	int x,i,check[10]={0},ok=0; 
	
	while(true){
	scanf("%s",a);
	
	x=strlen(a);
	
	if(x<10){
		printf("0\n");
	
	}else{
		
		for(i=0;i<x;i++){
			if(a[i]=='B')
				check[0]++;
			if(a[i]=='u')
				check[1]++;
			if(a[i]=='l')
				check[2]++;
			if(a[i]=='b')
				check[3]++;
			if(a[i]=='a')
				check[4]++;
			if(a[i]=='s')
				check[5]++;
			if(a[i]=='r')
				check[6]++;
				printf("%d %d %d %d %d %d %d\n" , check[0],check[1],check[2],check[3],check[4],check[5],check[6]);
			if(check[0]>0 && check[1]>0 && check[2]>0 && check[3]>0 && check[4]>0 && check[5]>0 && check[6]>0) {
			if(check[0]<=check[2] && check[1]<=2*check[0] && check[3]<=2*check[0] && check[4]<=2*check[0] && check[5]<=check[0] && check[6]<=check[0])
					ok++;
			}
				
		}
		
			printf("%d\n", ok);
	}
}
	}
