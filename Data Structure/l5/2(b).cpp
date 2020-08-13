#include <bits/stdc++.h>
using namespace std;


int print(int x,int y){
    if (x+1 == y) return 0;

    else{
        cout<<y<<" ";
        return print (x,y+1);
    }

}

int main(){
    int num;

    cin>>num;

    print(num, 1);

    return 0;
}

