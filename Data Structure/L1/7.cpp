#include<bits/stdc++.h>
using namespace std;

int main(){
	 int i,j,n,Flaging1[100000]={0};

	cin>>n;
    clock_t time_req;
	time_req = clock();

    for(i=2; i<n; i++){
		if(Flaging1[i]==0){
			for(j=1;j*i<=n; j++){
				Flaging1[i*j]=1;
			}
		}
	}
    time_req = clock()- time_req;
	cout << "it took " << (float)time_req/CLOCKS_PER_SEC << " seconds" << endl;

	if(Flaging1[n]==1){
		cout<<"NOT prime"<<endl;
	}else{
		cout<<"Prime"<<endl;
	}

    return 0;
}
