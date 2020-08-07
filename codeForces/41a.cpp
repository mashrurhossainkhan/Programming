#include <bits/stdc++.h>
using namespace std;
int main(){
    char a[105], b[105];

    cin>>a;
    cin>>b;
    int x,y;
    x= strlen (a);
    y=strlen(b);

    if(x!=y){
        cout<<"NO"<<endl;
        return 0;
    }
    int j =y-1;
    for(int i=0; i<x; i++){
    //cout<<a[i]<<endl<<b[j]<<endl;
            if(a[i]!=b[j]){
                cout<<"NO"<<endl;
                return 0;
            }
        j--;
    }

    cout<<"YES"<<endl;

    return 0;
}
