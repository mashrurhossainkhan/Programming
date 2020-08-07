#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int input,i,count=0,y=0,ans=0;
	char arr[10000];
	
	cin>>input;
	
	for(i=0; i<input; i++){
		cin>>arr[i];
		if(arr[i]=='8')count++;
	}
	
	y=input/11;
	//cout<<count<<endl;
	if(count>=y){
		ans=y;
	}else if(count==0){
		ans=0;
	}else{
		ans=count;
	}
	
	cout<<ans<<endl;
	
	return 0;
}
