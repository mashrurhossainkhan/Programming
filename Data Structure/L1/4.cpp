#include<bits/stdc++.h>
using namespace std;

int isFlag(int n){
    int count=0;
    for(int i=2; i<n-1; i++){
        if(n%i==0){
            count++;
            break;
        }
    }

    if(count==0){
        return 1;

    }else{
        return 0;
    }
}

int main(){
    int n,countNotPrime=1,countPrime=1;

    cin>>n;

     clock_t time_req;
	time_req = clock();

    for(int i=3; i<=n; i++){
        if(isFlag(i)==0){
            countNotPrime++;
        }else{
            countPrime++;
        }
    }

    cout<<"Total prime: "<<countPrime<<endl;
    cout<<"Total Not prime: "<<countNotPrime<<endl;
    time_req = clock()- time_req;
	cout << "it took " << (float)time_req/CLOCKS_PER_SEC << " seconds" << endl;

    return 0;
}

