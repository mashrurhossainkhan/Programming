#include<bits/stdc++.h>
using namespace std;

int main()
{
	
    long long n,m,a,x=0,y=0;
    cin>>n>>m>>a;

    if(n%a)
    x=n/a+1;
    else x=n/a;
    if(m%a)
    y=m/a+1;
    else y=m/a;
    cout<<x*y<<endl;

    return 0;
}
