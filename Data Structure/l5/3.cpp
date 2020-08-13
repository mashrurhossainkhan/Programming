#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if (n>=1)
        return n*factorial(n-1);
    else
        return 1;
}

int main() {
    int n,z;
    cout<<"Enter a number: ";
    cin>>n;

    z= factorial(n);
    cout<<z<<endl;
    return 0;
}

