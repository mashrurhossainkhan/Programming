#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[4],i,ans=0;
	
	for(i=0; i<3; i++){
		scanf("%d", &a[i]);
	}
	
	sort(a,a+3);
	
	ans=(a[1]-a[0])+(a[2]-a[1]);
	
	cout<<ans<<endl;
}
