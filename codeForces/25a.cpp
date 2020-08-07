#include <bits/stdc++.h>
using namespace std;
int main(){
	int test,n[105], i=1,j=0, x=0,k=0,y=0;
	cin>>test;
	
	for(i=1; i<=test; i++){
		cin>>n[i];
	}
	
	for(i=1; i<=test; i++){
		if(n[i]%2==0){
			x=i;
			j++;
		}else{
			y=i;
			k++;
		}	
	}
	
	if(k==1)
		printf("%d\n",y);
	else
		printf("%d\n",x);
	
		return 0;
}
