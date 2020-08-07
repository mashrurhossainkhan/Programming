#include <bits/stdc++.h>
using namespace std;

int main(){
	
	char a[100];
	int i,x,check=0,check1=0,ans=0;
	
	cin>>a;
	
	x=strlen(a);
	
	for(i=0; i<=x-1;i++){
		if(a[i]=='0'){
			check++;
			if(check>=7){
				ans=1;
			}
			check1=0;
			
		}else{
			check1++;
			if(check1>=7){
				ans=1;
			}
			check=0;
			
		}
		
		
	}
	
	if(ans==1){
		printf("YES\n");
	}else{
		printf("NO\n");
	}

	return 0;
}
