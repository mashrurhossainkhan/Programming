#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[107],CountSmall=0,CountCapital=0,length;
	
	cin>>a;
		
	length=strlen(a);
	
	for(int i=0; i<length; i++){
		if(a[i]>='A' && a[i]<='Z')
			CountCapital++;
		else
			CountSmall++;
	}
	
	if(CountCapital>CountSmall){
		for(int i=0; i<length; i++){
			if(a[i]>'Z'){
				a[i]=a[i]-32;
			}
		}
	}else if(CountSmall>CountCapital){
		for(int i=0; i<length; i++){
			if(a[i]>='A' && a[i]<='Z'){
				a[i]=a[i]+32;
			}
		}
	}else{
		for(int i=0; i<length; i++){
			if(a[i]>='A' && a[i]<='Z'){
				a[i]=a[i]+32;
			}
		}
	}
	for(int j=0; j<length;j++){
		cout<<a[j];
	}
	cout<<endl;
	return 0;
}
