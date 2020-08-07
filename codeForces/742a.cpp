#include <bits/stdc++.h>
using namespace std;
int main(){
	
	long long arr=1378;
	
	long long n,i,y;
	
	cin>>n;
	
	if(n>=2){
	for(i=2;i<=n;i++){
		
		arr=arr * arr;
		//printf("%lld\n",arr[1]);
		//y=arr[i]%10;
		//printf("%lld\n",arr);
	
	}
	//cout<<"arr="<<arr<<endl;
	y=arr%10;
	
	printf("%lld\n",y);
}else{
	//cout<<"arr="<<arr<<endl;
	y=arr%10;
	
	printf("%lld\n",y);
}
	return 0;
}
