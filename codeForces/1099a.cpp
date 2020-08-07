#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int w,h,w1,h1,w2,h2,ans=0,length=0;
	
	cin>>w>>h>>w1>>h1>>w2>>h2;
	ans=w;
	int x=h;
	while(x!=0){
		
		ans+=x;
		
		//cout<<"ans="<<ans<<endl;
		if(x==h1){
			ans-=w1;
			if(ans<0)ans=0;
		}
		if(x==h2){
			ans-=w2;
			if(ans<0)ans=0;
		}
		x--;
	}
	
	cout<<ans<<endl;
	
	return 0;
}
