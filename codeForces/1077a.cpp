#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	long long t,i;
	long long k,ans,x,a,b,y;
	cin>>t;
	
	for(i=0; i<t; i++){
		ans=0;
		scanf("%lld%lld%lld", &a,&b,&k);
		x=k/2;
		y=k-x;
		ans=y*a - x*b;
		
		printf("%lld\n",ans);
	}
	
	return 0;
}
