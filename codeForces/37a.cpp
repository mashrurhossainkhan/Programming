#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int n,a[1002],count=0,i,height[1002]={0},j,x=1,y=0;
	
	
	scanf("%d", &n);
	count=n;
	
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
		height[i]=1;
	}
	
	for(i=0; i<n-1; i++){
		
		for(j=i+1; j<n; j++){
			if(a[i]==a[j]){
				//cout<<a[i]<<"="<<a[j]<<endl;
				count--;
				
				y+=1;
				//cout<<height[i]<<endl;
				if(y==1){
					//cout<<"ff"<<endl;
					j=n;
					y=0;
					
				}
				
			}
			//cout<<i<<":"<<y<<endl;
		}
		//cout<<i<<":"<<height[i]<<endl;
	}
	for(i=0; i<n-1; i++){
		
		for(j=i+1; j<n; j++){
			if(a[i]==a[j]){
				//cout<<a[i]<<"="<<a[j]<<endl;
				height[i]+=1;
				
				
				}
				
			}
			//cout<<i<<":"<<y<<endl;
		}
		//cout<<i<<":"<<height[i]<<endl;
	
	
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
		if(height[i]>x){
			//cout<<i<<":"<<height[i]<<endl;
			x=height[i];
			//cout<<i<<"x="<<x<<endl;
		}
	}
}
	
			printf("%d %d\n",x,count);
			
	
	return 0;
}
