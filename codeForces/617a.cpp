#include <iostream>
using namespace std;
int main(){
	long long input,jumped=0,temp=0;
	
	cin>>input;
	temp=input;
	while(temp!=0){
		if(temp>=5){
			temp-=5;
			jumped++;
		}else if(temp==4){
			temp-=4;
			jumped++;
		}else if(temp==3){
			temp-=3;
			jumped++;
		}else if(temp==2){
			temp-=2;
			jumped++;
		}else if(temp==1){
			temp-=1;
			jumped++;
		}
	}
	
	cout<<jumped<<endl;
	
	return 0;
}
