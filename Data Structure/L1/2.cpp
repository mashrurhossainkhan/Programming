#include<bits/stdc++.h>
using namespace std;

void isFlag(int n){
    int count=0;
    for(int i=2; i<n-1; i++){
        if(n%i==0){
            count++;
            break;
        }
    }

    if(count==0){
        cout<<"Prime Number"<<endl;

    }else{
        cout<<"Not a Prime Number"<<endl;
    }
}

int main(){
    int n;

    cin>>n;

    isFlag(n);

    return 0;
}

