#include <bits/stdc++.h>
using namespace std;
int main(){
	char a[105];
	int h=0,e=0,l1=0,l2=0,i,x,counth=0,counte=0,countl1=0,counto=0,count=0;
	
	cin>>a;
	
	x=strlen(a);
	
	for(i=0; i<x; i++){
		
		if(a[i]=='h'||a[i]=='H'){
			if(counth<1){
				count++;
				h=i;
				counth++;
			}
		}else if(a[i]=='e'||a[i]=='E'){
			if(i>h && i>0 && counte<1 && counth!=0){
				count++;
				e=i;
				counte++;
			}
		}else if(a[i]=='l'||a[i]=='L'){
			if(i>e && i>h && i>1 &&countl1<2 && e>0){
				count++;
				l1=i;
				countl1++;
			}
		
		}else if(a[i]=='o'||a[i]=='O'){
			if(i>l2 && i>l1&&i>e && i>h &&i>3 &&counto<1 && l1>0){
				count++;
				counto++;
			}
		}
	}
	
	if(count==5){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}

	
	return 0;
}
