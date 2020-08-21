#include <iostream>
using namespace std;

int LinearSearch(int a[], int n, int SearchingNumber){
	int i;
	
	for(i=1; i<=n; i++){
		if(a[i]==SearchingNumber){
			return i;
			//cout<<"dd"<<endl;
		}
	}
	
	return -1;
}
int main(){
	int n,a[100],ans,SearchingNumber;
	
	cout<<"Enter the number of input:";
	cin>>n;
	
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	
	cout<<"enter your searching number: ";
	cin>>SearchingNumber;
	ans=LinearSearch(a,n,SearchingNumber);
	//cout<<ans<<endl;
	
	if(ans!=-1)
		cout<<"foung at: "<<ans<<endl;
	else
		cout<<"Not Found\n"<<endl;
		
	return 0;
	
}
