#include <bits/stdc++.h>
#include <math.h>
using namespace std;
bool prime[1000005];
void seive(){
	int i,sq,j;
	for(i=2;i<=1000000;i++){
		prime[i]=1;
	}
	sq=sqrt(1000000);
	for(i=2;i<=sq;i++){
		if(prime[i]){
			for(j=i;i*j<=1000000;j++){
				prime[i*j]=0;
			}
		}
	}
}
int main(){
	seive();
	long long n;
	int k,t;
	double q;
	int p;
	cin>>t;
	for(k=1;k<=t;k++){
		cin>>n;
		q=sqrt(n);
		if(ceil(q)==floor(q)){
			p=q;
			if(prime[p]){
				printf("YES\n");
			}else{
				printf("NO\n");
			}
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
	
