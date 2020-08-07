#include <bits/stdc++.h>
using namespace std;
int main(){
	int k,n,s,p,ii=0,count=1,z=0,j=0,ans=0;
	
	cin>>k>>n>>s>>p;
	
	ii=s;
	//cout<<ii<<endl;
	
	while(ii<n){
		count++;
		ii=ii+s;
		//if(ii<n) break;
		
	}
	
	//cout<<count<<endl;
	z=count*k;
	
	//cout<<z<<endl;
	
	while(z>j){
		ans++;
		j+=p;
	}
	
	cout<<ans<<endl;
	
	return 0;
}
