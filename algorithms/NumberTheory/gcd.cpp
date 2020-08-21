#include <iostream>
using namespace std;

int gcd(int a, int b){
	if(a%b==0)return b;
	
	else return gcd(b,a%b);
}

int main(){
	int a,b,x;
	
	cin>>a>>b;
	if(b>a){
		int temp=b;
		b=a;
		a=temp;
	}
	x=gcd(a,b);
	
	cout<<"gcd="<<x<<endl;
	
	return 0;
}
