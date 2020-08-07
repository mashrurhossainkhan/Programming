#include<iostream>
using namespace std;

int main(){
	int t,i,a[1000]={9},count=0;
	
	cin>>t;
	
	for(i=1; i<=t; i++){
		cin>>a[i];
	}
	
	for(i=1; i<t; i++){
		if(a[i]==0 && a[i-1]==1 && a[i+1]==1){
			count++;
			//cout<<i<<endl;
			i+=2;
		}
	}
	
	cout<<count<<endl;
	
	return 0;
}
