//count the number of steps to sort
#include <iostream>
using namespace std;

int bubbleSort(int n, int arr[1010]){
	int count=0,temp;
	for(int k=0; k<n;k++){
		for(int i=0; i<n-k-1; i++){
				if(arr[i]>arr[i+1]){
						temp=arr[i];
						arr[i]=arr[i+1];
						arr[i+1]=temp;
						count++;
				}
		}
	}
	
	return count;
}

int main(){
	int n,count=0,arr[1010];
	
	cin>>n;
	
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	count=bubbleSort(n,arr);
	cout<<count<<endl;
	
	return 0;
}
