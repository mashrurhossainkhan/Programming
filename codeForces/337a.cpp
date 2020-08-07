#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,m,j,y,n;

    cin>>n>>m;

    int input[10000],i,ans[10000],answer=0;

    for(i=1; i<=m; i++){
        cin>>input[i];
    }

    sort(input,input+(m+1));
   x=0;
    for(j=1; j<=(m-n)+1; j++){
            ans[x]=input[(j+n)-1]-input[j];

            //cout<<ans[x]<<endl;
            if(x==0)answer=ans[x];
            if(x>0)
                if(answer>ans[x])
                answer=ans[x];
            x++;

    }


    cout<<answer<<endl;
    return 0;
}
