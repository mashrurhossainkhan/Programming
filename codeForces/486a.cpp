#include <bits/stdc++.h>
using namespace std;
int main(){
	long long x=0,y=0,n,sum=0;
	
	scanf("%lld", &n);
	
	if(n%2==0){
		x=n/2;
		sum=(x*(x+1))-(x*x);
		
	}else{
		x=n/2;
		y=(n/2)+1;
		sum=(x*(x+1))-(y*y);
	}
	printf("%lld\n",sum);
	
	return 0;
}
