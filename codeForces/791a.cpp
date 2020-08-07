#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int a,b,count=1;
	scanf("%d %d", &a, &b);
 
	while(1){
		if(a<b)
		{
			a*=3;
			b*=2;
			if(a<=b){
				count++;	
			}else{
				break;
			}
		}
		else if(a>b)
		{
			a*=2;
			b*=3;
			if(a>=b){
				count++;
			}else{
				break;
			}
		}else{
			break;
		}
	}
	printf("%d\n",count);
	return 0;
}
