#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,l,m,n,d,i=0,ans=0,arr[1000000]={0};

    cin>>k>>l>>m>>n>>d;

    if(k==1 || l==1 ||m==1 ||n==1){
            ans=d;
            cout<<ans<<endl;
            return 0;
    }

    for(i=1; i<=d; i++){
        arr[i]=i;
    }

    for(i=1; i<=d; i++){
        int x= k*i;
        arr[x]=0;
    }

    for(i=1; i<=d; i++){
        int x= l*i;
        arr[x]=0;
    }

    for(i=1; i<=d; i++){
        int x= m*i;
        arr[x]=0;
    }

    for(i=1; i<=d; i++){
        int x= n*i;
        arr[x]=0;
    }

    int count=0;

    for(i=1; i<=d; i++){
        if(arr[i]==0)
            count++;
    }

    cout<<count<<endl;

    return 0;
}
