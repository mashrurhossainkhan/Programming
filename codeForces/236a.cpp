#include <bits/stdc++.h>
using namespace std;
int main(){
	set<char>s;
	char a[105];
	int x,y;
	
	cin>>a;
	
	x=strlen(a);
	
	for(int i=0; i<x; i++){
		s.insert(a[i]);
	}
	
	y=s.size();
	
	if(y%2==0){
		printf("CHAT WITH HER!\n");
	}else{
		printf("IGNORE HIM!\n");
	}
	
	return 0;
}
