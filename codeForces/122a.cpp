#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int>l;
	vector<int>::iterator it;
	int n,shesh,flag=0,i,flag1=0;
	scanf("%d", &n);
	
	if(n%4==0 || n%7==0){
		printf("YES\n");
		return 0;
	}
	
	for(i=1; i<=1000; i++){
			int x=i;
			while(x>0){
				shesh=x%10;
				x=x/10;
				//if(i==78)
					//cout<<shesh<<endl;
				if(shesh==7 || shesh==4){
					flag=1;
				}else{
					flag=0;
					break;
				}
			}
		
		//cout<<flag<<endl;
		if(flag==1){
			for(int j=1; j<=1000; j++){
				int u=i*j;
				l.push_back(u);
			}
		}else{
			flag=0;
		}
	}
	
	for(it=l.begin(); it!=l.end(); ++it){
		//cout<< *it<<endl;
		if(n%*it==0){
			flag1=1;
			break;
		}
	}
	
	if(flag1==1) printf("YES\n");
	else printf("NO\n");
	
	return 0;
}
