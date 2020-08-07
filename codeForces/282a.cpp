#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int n,y=0;
	char x[10];
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		cin>>x;
		if(x[0]=='+'){
			++y;
		}else if(x[1]=='+'){
			y++;
		}else if(x[0]=='-'){
			--y;
		}else{
			y--;
		}
	}
	cout<<y<<endl;
	return 0;
}
