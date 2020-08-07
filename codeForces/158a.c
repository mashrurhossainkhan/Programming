#include <stdio.h>

int main(){
	
	int n,k,i,a[100],count=0,x;
	
	scanf("%d %d", &n, &k);
	
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
	}
	
	for(x=1; x<=n; x++){
		 if(a[x]==0 && a[x+1]<=0){
				count=count;
				printf("%d\n",count);
				return 0;
		}
		else if(a[x]!=a[k]){
			
			if(a[x]<a[k]){
					break;
				}
			count++;
			
			}
			else if(a[x]==a[k]){
				
				count++;
				
				if(a[x+1]<a[k]){
				
					break;
				}
			}
		}	
		if(count<=0){
				printf("0\n");
				return 0;
			}else 
			if(a[k]==0){
				count--;
				printf("%d\n", count);
		}
			else{
			printf("%d\n", count);
		}
	

	return 0;

}
