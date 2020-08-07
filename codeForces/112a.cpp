#include <bits/stdc++.h>
using namespace std;
int main(){
	
	char a[102],b[102];
	int x,sum=0;
	cin>>a>>b;
	
	x=strlen(a);
	
	for(int i=0; i<x; i++){
		a[i]=toupper(a[i]);
		b[i]=toupper(b[i]);
		
		//cout<<"a["<<i+1<<"]="<<a[i]<<endl<<"b["<<i+1<<"]="<<b[i]<<endl;
	}
	
	for(int j=0; j<x; j++){
		if(a[j]==b[j]){
			sum=sum;
			//cout<<"sum1"<<endl;
		}else if(a[j]>b[j]){
			sum++;
			//cout<<"sum2"<<endl;
			break;
		}else{
			sum--;
			//cout<<"sum3"<<endl;
			break;
		}
		
		//cout<<j+1<<":"<<sum<<endl;
	}
	
	//cout<<sum<<endl;
	
	if(sum>0){
		printf("1\n");
	}else if(sum<0){
		printf("-1\n");
	
	}else{
		printf("0\n");
	}

	return 0;
}
