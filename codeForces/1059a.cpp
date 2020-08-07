
#include <iostream>
using namespace std;
int main(){
    int n,l,a,ti[99999],li[99999],x[99999]={0},z=0,ans,temp=0,temp1=0;

    cin>>n>>l>>a;

    for(int i=0; i<n; i++){
        cin>>ti[i]>>li[i];
        x[i]=ti[i]+li[i];
        temp1=x[i];
        if(x[i-1]!=ti[i]){
            temp=ti[i]-x[i-1];
            ans+=temp/a;
        }
    }

    z=l-temp1;

    ans+=z/a;

    cout<<ans<<endl;

    return 0;
}
