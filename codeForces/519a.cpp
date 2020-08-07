#include <bits/stdc++.h>
using namespace std;

int main(){
	
	char a[100];
	int i,check=0,check1=0,j,x;

	for(i=0;i<8;i++){
		
		cin>>a;
		x=strlen(a);
		
		for(j=0;j<=x-1;j++){
		
		if(a[j]=='Q'){
			check+=9;
			
		}else if(a[j]=='R'){
			check+=5;
			
		}else if(a[j]=='B'){
			check+=3;
			
		}else if(a[j]=='N'){
			check+=3;
			
		}else if(a[j]=='P'){
			check++;
			
		}else if(a[j]=='q'){
			check1+=9;
			
		}else if(a[j]=='r'){
			check1+=5;
			
		}else if(a[j]=='b'){
			check1+=3;
			
		}else if(a[j]=='n'){
			check1+=3;
			
		}else if(a[j]=='p'){
			check1++;
			
		}else if(a[j]=='.'||a[j]=='k'||a[j]=='K'){
			check+=0;
			check1+=0;
			
		}
	}
	}
	
	
	
	if(check1>check){
		cout<<"Black"<<endl;
	
	}else if(check1<check){
		cout<<"White"<<endl;
		
	}else{
		cout<<"Draw"<<endl;
	}
	return 0;
}
	
