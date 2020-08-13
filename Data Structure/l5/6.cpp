#include <bits/stdc++.h>
using namespace std;

int maximum(int array[], int index, int length)
{
    int max;
    if(index >= length-2)
    {
        if(array[index] > array[index + 1])
            return array[index];
        else
            return array[index + 1];
    }
    max = maximum(array, index + 1, length);

    if(array[index] > max)
        return array[index];
    else
        return max;
}



int main()
{
    int array[100], n, max;
    int i;

    cout<<"Enter size of the array: ";
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>array[i];
    }

    max = maximum(array, 0, n);

    cout<<max<<endl;

    return 0;
}

