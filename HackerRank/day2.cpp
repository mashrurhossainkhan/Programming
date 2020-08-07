#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main(){
	double a;
	double b,c,tip,tax;
	double total=0;
	int total1=0;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
	tip=(a*(b/100));
	tax=(a*(c/100));

	total=a+tip+tax;
	total1=a+tip+tax;
	
	if(total-total1>=.5){
		cout<<ceil(total);
	}else{
		cout<<floor(total);
	}
	
	return 0;
}
