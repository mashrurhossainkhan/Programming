#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	char a,b,a1,b1,a2,b2,a3,b3,a4,b4,a5,b5;
	
	cin>>a>>b;
	
	cin>>a1>>b1>>a2>>b2>>a3>>b3>>a4>>b4>>a5>>b5;
	
	if(a==a1 || a==a2 || a3==a || a==a4 || a==a5){
		cout<<"yes"<<endl;
	}else if(b==b1 || b==b2 || b==b3 || b==b4 || b==b5){
		cout<<"yes"<<endl;
	}else{
		cout<<"no"<<endl;
	}
	return 0;
}
