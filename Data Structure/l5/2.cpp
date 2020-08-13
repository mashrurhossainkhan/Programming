#include <bits/stdc++.h>
using namespace std;


int print(int x){
    if (x == 0) return 0;

    else{
        cout<<x<<" ";
        return print (x-1);
    }

}

int main(){
    int num;

    cin>>num;

    print(num);

    return 0;
}
