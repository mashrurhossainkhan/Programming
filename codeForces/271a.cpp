#include <iostream>
using namespace std;
int main(){
    int n;

    cin>>n;

    int i;

    for(i=n+1; ; i++){
            int j=0,m=0,ans=i;
            int count =0,count1=0;
            bool x=false;
            int y[100]={0};
        while(m<4){
            y[j]=ans%10;
            if(y[j]==0){
                    count1++;
                    x=true;
            }if(count1>1)x=false;
            ans=ans/10;

        if(j==3){
            for(int k=j; k>=0; k--){
                for(int l=k-1; l>=0; l--){
                if(y[k]==y[l]){
                   m=11;
                   break;
                }
                }

            }
        }
            j++;
            m++;
        }
        //cout<<m<<endl;
        if(m!=12){
            cout<<i<<endl;
                return 0;
        }
    }
}
