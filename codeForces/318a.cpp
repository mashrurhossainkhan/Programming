#include <bits/stdc++.h>
using namespace std;
int main(){
	
	long long n,k;
	int i,check=0;;
	
	cin>>n;
	cin>>k;
	
	for(i=1;i<=n;i++){
		if(i%2!=0){
			check++;
			if(check==k){
				cout<<i<<endl;
				break;
			}
		}
	}
	
	for(i=1;i<=n;i++){
		if(i%2==0){
			check++;
			if(check==k){
				cout<<i<<endl;
				break;
			}
			
		}
	}
}
