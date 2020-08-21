#include <iostream>
using namespace std;
int main(){
	 int i,j,n,array[10000]={0};
	
	cout<<"Enter a number to check a number is prime or not:";
	cin>>n;
	
	
		for(i=2; i<n; i++){
		if(array[i]==0){
			for(j=1;j*i<=n; j++){
				array[i*j]=1;	
			}
		}
	}

	
	if(array[n]==1){
		cout<<"NOT prime"<<endl;
	}else{
		cout<<"Prime"<<endl;
	}
	
}
