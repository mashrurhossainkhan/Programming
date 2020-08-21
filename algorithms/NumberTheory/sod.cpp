#include <iostream>
using namespace std;
int main(){
	int number,i,sum=0;
	
	cin>>number;
	
	for(i=1; i<=number/2; i++){
		if(number%i==0){
			sum+=i;
		}
	}
	
	cout<<"Sum of Divisor="<<sum+number<<endl;
}
