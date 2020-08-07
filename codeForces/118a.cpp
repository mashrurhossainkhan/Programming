#include <bits/stdc++.h>
using namespace std;
int main(){
	
	char a[100];
	int x;
	
	cin>>a;
	
	x=strlen(a);
	
	for(int i=0; i<x; i++){
		a[i]=tolower(a[i]);
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='y'){
			}else{
				cout<<'.'<<a[i];
			}
			
		}
	}
