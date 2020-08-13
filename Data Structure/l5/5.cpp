#include <bits/stdc++.h>
using namespace std;

int deciToBin(int n)
{
    if (n == 0)
        return 0;
    else
        return (n % 2 + 10 * deciToBin(n / 2));
}

int main()
{
    int n;
    cin>>n;
    cout << deciToBin(n);
    return 0;
}
