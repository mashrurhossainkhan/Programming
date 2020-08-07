#include <bits/stdc++.h>
using namespace std;
int main(){
	char a[100000];
	int i,x;
	cin>>a;
	x=strlen(a);
	
	for(i=0; i<x; i++){
		if(a[0]>='A' && a[0]<='Z'){
				break;
		}else if(a[i]>='A' && a[i]>='Z' && a[0]>='a' && a[0]<='z'){
			if(a[i]>='A' && a[i]>='Z'){
				a[i]=a[i]-32;
			}else{
				a[i]=a[i]+32;
			}
			
		}else{
			break;
		}
	}
	cout<<a<<endl;
	return 0;
}
