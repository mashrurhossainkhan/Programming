#include <iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long x=n;
    int xx=n;
    long long count=0;
    for(int i=0; x!=0; i++){
        long long y=x%10;
        //cout<<y<<endl;
        x/=10;
        if(y==7 || y==4)
            count++;
    }


    if(count==4||count==7)
    cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;

}
