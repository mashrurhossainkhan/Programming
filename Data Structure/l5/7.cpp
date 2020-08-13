#include <bits/stdc++.h>
using namespace std;

int Rev(char array[], int index, int length)
{
    cout<<array[length];
    if(length==index) return 0;
    return Rev(array, index, length-1);
}



int main()
{
    char array[100];
    int n;
    int i;

    cout<<"Enter size of the array: ";
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>array[i];
    }

    Rev(array, 0, n-1);

    return 0;
}


