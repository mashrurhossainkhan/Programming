#include <bits/stdc++.h>
int main(){
	
	int m,d,col=4;
	
	scanf("%d %d", &m, &d);
	
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
		if(d<=5){
			col=5;
			printf("%d\n",col);
		}else{
			col=6;
			printf("%d\n",col);
		}
	}else if(m==2){
		if(d==1){
			col=4;
			printf("%d\n",col);
		}else{
			col=5;
			printf("%d\n",col);
		}
	}else{
		if(d<=6){
			col=5;
			printf("%d\n",col);
		}else{
			col=6;
			printf("%d\n",col);
		}
	}

	
	return 0;
}
