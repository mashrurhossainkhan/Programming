#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int m,n,i,x,sum=0,count=0,z=0;

    cin>>m>>n;

    for(i=1; i<=m; i++){
        count=0;
        cin>>x;
        x=x+sum;
        sum=x;
        z=sum-n;
        count=0;
        if(z>=0){
            sum=z;
            count++;
        }
        int a=sum/n;
        sum=sum%n;
        count+=a;
        cout<<count<<" ";
    count=0;
}


cout<<endl;

return 0;
}
