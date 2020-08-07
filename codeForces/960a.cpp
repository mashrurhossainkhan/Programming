#include <bits/stdc++.h>
using namespace std;
int main(){
	char a[6000];
	int x,counta=0,countb=0,countc=0,flag=0;
	cin>>a;
	
	x=strlen(a);
	
	for(int i=0; i<x; i++){
		if(a[i]=='a')counta++;
		else if(a[i]=='b')countb++;
		else countc++;
		
	}
	
	if(counta==0 || countb==0){
		printf("NO\n");
		return 0;
	}
	
	for(int i=0; i<x-1; i++){
		if(a[i]=='a'){
			if(a[i+1]=='a' || a[i+1]=='b'){
				flag=1;
			}else{
				flag=0;
				break;
			}
		}else if(a[i]=='b'){
			if(a[i+1]=='c' || a[i+1]=='b'){
				flag=1;
			}else{
				flag=0;
				break;
			}
		}else if(a[i]=='c'){
			if(a[i+1]=='c'){
				flag=1;
			}else{
				flag=0;
				break;
			}
		}
		if(a[0]!='a'){
			flag=0;
			break;
		}
	}
	
	if(flag==0){
		printf("NO\n");
	}else{
		if(countc==counta || countc==countb){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
}
