#include <bits/stdc++.h>
using namespace std;
int main(){
	int k,n,w,pay=0,ans=0;
	
	scanf("%d %d %d", &k, &n, &w);
	
	for(int i=1; i<=w; i++){
		ans+=(i*k);
	}
	
	pay=ans-n;
	
	if(pay>0)
		printf("%d\n",pay);
	else
		printf("0\n");
		
		return 0;
}
