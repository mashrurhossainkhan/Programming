#include <iostream>
using namespace std;

void InsertionSort(int arr[10000],int n){
	int i,j,temp,a[10000];
	
	for(int u=0; u<n; u++){
		a[u]=arr[u];
	}
	for(i=0; i<n;i++){
		temp=a[i];
		j=i;
		
		while(j>0 && temp<a[j-1]){
			a[j]=a[j-1];
			j=j-1;
		}
		//cout<<j+1<<" ";
		a[j]=temp;
	}
	for(int y=0; y<n; y++){
		for(int z=0; z<n; z++){
			if(arr[y]==a[z]){
				cout<<z+1<<" ";
				break;
			}
		}
	}
	cout<<endl;
}
int main(){
	int i,n,arr[10000];
	
	cin>>n;
	
	for(i=0; i<n; i++){
		cin>>arr[i];
	}
	InsertionSort(arr,n);
	
	return 0;
}
