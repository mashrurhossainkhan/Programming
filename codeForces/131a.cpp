#include <bits/stdc++.h>
using namespace std;
int main(){
	char a[100000];
	int i,x,j,k,l;
	cin>>a;
	x=strlen(a);
	
	if(a[0]>='A' && a[0]<='Z'){
		for(l=0; l<x; l++){
			if(a[l]>='a' && a[l]<='z'){
				cout<<a<<endl;
				return 0;
			}
		}
		for(k=0; k<x; k++){
			
			if(a[k]>='A' && a[k]<='Z')
				a[k]=a[k]+32;
			
		}
		}else{
			
			for(i=1; i<x; i++){
				if(a[i]>='a' && a[i]<='z'){
					
					cout<<a<<endl;
					return 0;
				}
			}
				for(j=0; j<x; j++){
						if(a[j]>='A' && a[j]<='Z'){
							a[j]=a[j]+32;
						}else{
							a[j]=a[j]-32;
						}
					}
				}
			

			
		
	cout<<a<<endl;
	return 0;
}
