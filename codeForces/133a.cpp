#include <bits/stdc++.h>
using namespace std;
int main(){
	char a[105],count=0;
	int x;
	cin>>a;
	x=strlen(a);
	
	for(int i=0; i<x; i++){
		if(a[i]=='H'||a[i]=='Q'||a[i]=='9'){
			count++;
		}
	}
	if(count>=1){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	
	return 0;
}
