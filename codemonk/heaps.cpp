//ACCEPTED
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
	vector<int> x;
	long long n,q,m,operation;
	
	cin>>n;
	
	for(int i=0; i<n; i++){
		cin>>m;
		x.push_back(m);
	}
	cin>>q;
	
	for(int j=0; j<q; j++){
		cin>>operation;
		if(operation==1){
			cin>>m;
			x.push_back(m);
		}else{
			cout << *max_element(x.begin(), x.end())<<endl; 
		}
	}
	 
    return 0; 
	
}
