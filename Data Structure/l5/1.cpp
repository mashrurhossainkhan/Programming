#include <bits/stdc++.h>
using namespace std;

int GCD(int n1, int n2) {
    if (n2 != 0)
        return GCD(n2, n1 % n2);
    else
        return n1;
}

int main() {
    int n1, n2;
    printf("Enter Two Numbers: ");
    cin>>n1>>n2;

    cout<< GCD(n1, n2);
    return 0;
}


