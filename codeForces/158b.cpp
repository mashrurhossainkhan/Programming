#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int a[1000009],count1=0,count2=0,count3=0,count4=0,count=0,x;
	
	cin>>x;
	
	for(int i=0; i<x; i++){
		cin>>a[i];
	}
	
	for(int j=0; j<x; j++){
		if(a[j]==4){
			count4+=1;
		} if(a[j]==3){
			count3+=1;
		} if(a[j]==2){
			count2+=1;
		} if(a[j]==1){
			count1+=1;
		}
	}
	
	
	while(1){
		
		
		if(count1==0 && count2==0 && count3==0 && count4==0){
		
			break;
		}
		
		if(count4>0){
			count=count+count4;
			count4=0;
			
		}else if(count3==count1 && count3!=0 && count1!=0){
			count+=count1;
			count3=0; count1=0;
			
		}else if(count3>count1){
			count+=count3;
			count3=0; count1=0;
			
		}else if(count3<count1 && count3!=0){
			count+=count3;
			count1= count1 - count3;
			count3=0;  
			
		}else if(count2%2==0 && count2!=0){
			count=count+(count2/2);
			count2=0;
			
		}else if(count2>1 && count2%2!=0){
				count+=(count2/2);
				count2=1;
				
		}else if(count2==1){
			if(count1==2||count1==1){
				count++;
				count1=0; count2=0;
			}else if(count1>2){
				count++;
				count1=count1-2;
				count2=0;
			}else if(count1==0){
				count++;
				count2=0;
			}
			
		}else if(count1%4==0){
			count=count+(count1/4);
			count1=0;
			
		}else if(count1>=1 && count1<=3){
			count++;
			count1=0;
			
		}
		else if(count1>0){
			count=count+(count1/4);
			count1=(count1%4);
			
		}
		
		
	}
	cout<<count<<endl;
	
	return 0;
}
