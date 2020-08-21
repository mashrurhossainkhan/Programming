#include <iostream>
using namespace std;

int gcd(int a, int b){
	if(a%b==0)return b;
	
	else return gcd(b,a%b);
}

int main(){
	int a,b,x,l;
	
	cin>>a>>b;
	if(b>a){
		int temp=b;
		b=a;
		a=temp;
	}
	x=gcd(a,b);

	l=(a*b)/x;
	
	cout<<"LCM="<<l<<endl;
	
	return 0;
}

