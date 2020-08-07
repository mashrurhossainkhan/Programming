#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,a[10004],i,j;
	
	cin>>n;

	for(i=0; i<n; i++){
		cin>>a[i];
		
	}
	for(j=i-1;j>=0;j--){
			printf("%d ",a[j]);
		}
	return 0;
}
