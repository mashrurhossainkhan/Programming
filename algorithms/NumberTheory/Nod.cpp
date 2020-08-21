#include <iostream>
using namespace std;
int main(){
	int number,i,count=1;
	
	cin>>number;
	
	for(i=1; i<=number/2; i++){
		if(number%i==0){
			count++;
		}
	}
	
	cout<<"Number of Divisor="<<count<<endl;
}
