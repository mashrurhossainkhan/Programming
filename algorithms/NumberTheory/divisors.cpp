#include <iostream>
using namespace std;
int main(){
	int number,i;
	
	cin>>number;
	cout<<"Divisors are=";
	for(i=1; i<=number/2; i++){
		if(number%i==0){
			cout<<i<<" ";
		}
	}
	
	cout<<number<<endl;
	
	return 0;
}


