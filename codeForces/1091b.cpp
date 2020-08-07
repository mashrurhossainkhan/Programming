#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	long long n;
	long long xvalue,yvalue,avalue,bvalue,sum1=0,sum2=0;
	 vector<int>x ;
	  vector<int> y;
	   vector<int> a;
	   vector<int>b;  
	    vector<int>sumxvalue;
	vector<int>sumyvalue;  
	   
	   cin>>n;
	   
	   for(long long i=0; i<n; i++){
		   cin>>xvalue>>yvalue;
		   x.push_back(xvalue);
		   y.push_back(yvalue);
	   }
	   
	   for(long long i=0; i<n; i++){
		   cin>>avalue>>bvalue;
		   a.push_back(avalue);
		   b.push_back(bvalue);
	   }
	   if(n==1){
		   cout<<x[0]+a[0]<<" "<<y[0]+b[0]<<endl;
		   return 0;
	   }

		for(int i=0;i<n; i++){
			sum1+=(x[i]+a[i]);
			sum2+=(y[i]+b[i]);
		}
		
		cout<<sum1<<" "<<sum2<<endl;
	   return 0;
   }
