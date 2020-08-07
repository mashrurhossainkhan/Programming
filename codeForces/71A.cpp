#include <bits/stdc++.h>
using namespace std;
int main(){
	
	char a[10000];
	int x,t;
	
	scanf("%d", &t);
	
	while(t--){
	cin>>a;
	
	x=strlen(a);
	
	if(x<=10){
		cout<<a<<endl;
	}else{
		cout<<a[0]<<x-2<<a[x-1]<<endl;
	}
}
	return 0;
}
