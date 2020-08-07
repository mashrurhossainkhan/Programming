Copy
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[1000],ans[1000],n,i;

    cin>>n;

    for(i=1; i<=n; i++){
        cin>>a[i];
    }

    for(i=1; i<=n; i++){
        ans[a[i]]=i;
    }

    for(i=1; i<=n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}
