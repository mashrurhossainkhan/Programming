#include <bits/stdc++.h>
using namespace std;

int main(){
	char a[10005];
	int x,i,t,j;
	
	scanf("%d", &t);
	
	for(j=1; j<=t; j++){
	cin>>a;

	x=strlen(a);
	
	for(i=0; i<x; i++){
		if(a[i%2]==a[0]){
			cout<<a[i];
		}
		 
	}
	cout<<' ';
	
	for(i=0; i<x; i++){
		if(a[i%2]!=a[0]){
			cout<<a[i];
		}
		 
	}
	cout<<' ';
	cout<<endl;
}
	return 0;
}
