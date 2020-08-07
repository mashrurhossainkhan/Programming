#include <bits/stdc++.h>
using namespace std;
int main(){
	
	char a[100],temp[100];
	int x,i;
	
	scanf("%s",a);
	
	x=strlen(a);
	
	for(i=0; i<x;i++){
		
		if(a[i]=='+'){
			a[i]='+';
			continue;
			if(a[i+1]!='+'){
		}else if(a[i]>a[i+1]){
			temp[i]=a[i];
			a[i]=a[i+1];
			a[i+1]=temp[i]; 
		}
	}
		//printf("temp[%d]=%d\n",i, temp[i]);
		//printf("a[%d]=%c\n",i,a[i]);
	}
	for(i=x-1; i>=0;i--){
		cout<<a[i];
		
}
cout<<endl;
	
}
