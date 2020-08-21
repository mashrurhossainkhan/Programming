#include <iostream>
using namespace std;
int main(){
	int m,n,arr[10000],ans=-1;
	
	cin>>m>>n;
	
	for(int i=0; i<m; i++){
		cin>>arr[i];
	}
	
	for(int j=0; j<m; j++){
		if(arr[j]==n){
			ans=j+1;
			
		}
	}
	
	cout<<ans<<endl;
	
	return 0;
}
