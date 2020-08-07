#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[30],i,j=0;
	
	for(i=1; i<=25; i++){
		scanf("%d",&a[i]);
		if(a[i]==1)
			j=i;
	}
	
		if(j==1||j==5||j==21||j==25){
			printf("4\n");
		}else if(j==2||j==4||j==22||j==24||j==6||j==10||j==16||j==20){
			printf("3\n");
		}else if(j==3||j==23||j==7||j==9||j==17||j==19||j==11||j==15){
			printf("2\n");
		}else if(j==8||j==18||j==12||j==14){
			printf("1\n");
		}else{
			printf("0\n");
		}
	return 0;
	
}
