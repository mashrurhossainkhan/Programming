#include <iostream>
#include <string>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;


int main(){
	
	int a,i=4,sum=0;
	double b,d=4.0,sum1=0;
	string s1="HackerRank ",s2,s3;
	
	cin>>a>>b;
	
	getline(cin,s3);
	sum=i+a;
	sum1=b+d;
	
	cout<<sum<<endl;
	cout<<sum1<<setprecision(2)<<endl;
	
	
	s2=s1+s3;
	cout<<s2<<endl;

	
	return 0;
}
	
