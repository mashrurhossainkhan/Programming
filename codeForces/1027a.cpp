#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char a[10000];
    int i,j,count=0,x=0,n,length=0,count1=0;
    bool bool1;

    cin>>n;

    while(n--){
        count=0,count1=0;
        cin>>length;
        cin>>a;

        x=length;
        for(int j=0; j<length/2; j++){
            x--;

            if(a[x]-a[j]==2 ||a[x]-a[j]==-2 ||a[x]-a[j]==0){
                bool1=true;
            }else{
                bool1=false;
                break;
            }
        }

        if(bool1==true){
            cout<<"YES"<<endl;
        }else if(bool1==false){
            cout<<"NO"<<endl;
        }
        }
        return 0;
}
