#include <iostream>
using namespace std;
int main(){
	long long arr[1001],n,x,minimum=0,i,temp=0,z;
	bool flag=0;
	cin>>n>>x;
	
	for(i=0; i<n; i++){
		cin>>arr[i];
		if(i==0){
			minimum=arr[i];
			z=0;
		}
	}
			for(int k=0; k<n; k++){
				minimum=arr[k];
				for(i=k+1; i<n;i++){
					if(arr[i]<minimum){
						minimum=arr[i];
						//cout<<minimum<<endl;
						z=i;
						flag=1;
					}
				}
				if(flag==1){
					temp=arr[k];
					arr[k]=minimum;
					arr[z]=temp;
					flag=0;
					
				}
				x--;
				//cout<<x<<endl;
				if(x==0)break;
			}
	
	
	for(int j=0; j<n;j++){
		cout<<arr[j]<<" ";
	}
	
	cout<<endl;
}
