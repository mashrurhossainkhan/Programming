#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,input[1000000];
    int count=1;
    int maincount[1000000]={0};
    int l=1,j;

    cin>>n;

    for(i=0; i<n; i++){
        cin>>input[i];
    }

    for(j=0; j<n-1; j++){
        if(input[j+1]>=input[j]){
            count++;

        }else{
            maincount[l]=count;
            //cout<<maincount[l]<<endl;
            l++;
            count=1;
        }

    }
    if(l==1){
        cout<<count<<endl;
    }else{
        sort(maincount,maincount+l);
        if(count>maincount[l-1]){
            cout<<count<<endl;
        }else{
            cout<<maincount[l-1]<<endl;
        }
    }

    return 0;
}
