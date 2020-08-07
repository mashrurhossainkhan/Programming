#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,k,temp,a[1000],sum=0,sum1=0,l,count=1;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		cin>>a[i];
	}
	
	for(i=0; i<n; i++){
		//cout<<"fffd"<<endl;
		for(j=0; j<n-1; j++)
		{
			//cout<<"fffg"<<endl;
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				//cout<<"fffj"<<endl;
			}
		}
		//cout<<"sort: "<<a[i]<<endl;
	}
	
	for(k=0; k<n;k++){
		sum+=a[k];
	}

		for(l=n-1;l>=0; l--){
			
			sum1+=a[l];
			sum-=a[l];
			//printf("1. sum= %d , sum1= %d , count=%d\n",sum,sum1,count);
			if(sum1<=sum){
				count++;
			}
				
				//count++;
			
			//printf("2. sum= %d , sum1= %d , count=%d\n",sum,sum1,count);
	}
	
	printf("%d\n",count);
	
	return 0;
}
