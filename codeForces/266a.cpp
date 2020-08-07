#include <bits/stdc++.h>
using namespace std;
int main(){
	int x,i,j,check=0;
	char a[10000];
	cin>>x;
	
	for(j=0; j<x; j++){
		cin>>a[j];
}
	for(i=0; i<x; i++){
		if(a[i]==a[i+1]){
			check++;
		}
	}
	printf("%d\n",check);
	return 0;
}
