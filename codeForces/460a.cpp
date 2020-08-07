#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,count, temp, ans;
	
	scanf("%d %d", &n, &m);
	
	count = n, temp = 0, ans = 0;
	while(count >0){
		count--;
		temp++;
		ans++;
		
		if(temp == m){
			temp = 0;
			count++;
		}
		
	}
	
	cout<<ans<<endl;
}
