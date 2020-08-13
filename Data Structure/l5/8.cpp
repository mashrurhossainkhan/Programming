#include <bits/stdc++.h>
using namespace std;

int count1=0;
int Rev(char array[], int index)
{
	if (array[index] == '\0')
		return count1;
	else
		count1++;

	Rev (array, index + 1);
}



int main()
{
    char array[100],symbol;
    int n;
    int i,z;

    scanf ("%[^\n]s", array);

    z=Rev(array, 0);

    cout<<z<<endl;

    return 0;
}



