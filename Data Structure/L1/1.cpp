#include<bits/stdc++.h>
using namespace std;

void isPrimeCount(int n){
    int count=0;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            count++;
        }
    }

    if(count==2){
        cout<<"Prime Number"<<endl;
    }else{
        cout<<"Not a Prime Number"<<endl;
        cout<<"DIVISORS:"<<count<<endl;
    }
}

int main(){
    int n;

    cin>>n;

    isPrimeCount(n);

    return 0;
}
