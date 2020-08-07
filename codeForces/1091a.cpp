#include <iostream>
#include <algorithm>
using namespace std;

int lastLowestIndex(int y,int b,int r)
{
		int smallest=0;
    
        if (y < b && y<r)
        {
            smallest = y;
        }else if(b<y && b<r){
			smallest=b;
		}else{
			smallest=r;
		}
    
    return smallest;
}

int main(){
	int y,b,r,x,yellow=0,blue=0,red=0,sum=0;
	
	cin>>y>>b>>r;
	
	x=lastLowestIndex(y,b,r);
	
	if(x==y){
		blue=x+1;
		red=x+2;
		while(red>r){
			x--;
			blue--;
			red--;
			if(x==0 ||blue==0 ||red==0)break;
		}
		while(blue>b){
			x--;
			blue--;
			red--;
			if(x==0 ||blue==0 ||red==0)break;
		}
		sum=x+blue+red;
	}else if(x==b){
		yellow=x-1;
		red=x+1;
		while(yellow>y){
			x--;
			yellow--;
			red--;
			if(x==0 ||yellow==0 ||red==0)break;
		}
		while(red>r){
			x--;
			yellow--;
			red--;
			if(x==0 ||yellow==0 ||red==0)break;
		}
		sum=x+yellow+red;
	}else{
		yellow=x-2;
		blue=x-1;
		while(yellow>y){
			x--;
			blue--;
			yellow--;
			if(x==0 ||yellow==0 ||blue==0)break;
		}
		while(blue>b){
			x--;
			blue--;
			yellow--;
			if(x==0 ||yellow==0 ||blue==0)break;
		}
		sum=x+yellow+blue;
	}
	if(sum==0)cout<<"1"<<endl;
	else
		cout<<sum<<endl;
	
	return 0;
}
