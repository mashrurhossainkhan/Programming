#include <bits/stdc++.h>
using namespace std;
int main(){
	int test,a,b,math=0,max=0,i;
	
	scanf("%d", &test);
	
	for(i=0; i<test; i++){
		cin>>a;
		cin>>b;
		math=math-a;
		math=math+b;
		
		if(math>max){
			max=math;
		}
	}
	
	cout<<max<<endl;
	
	return 0;
}
