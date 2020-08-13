#include <bits/stdc++.h>
using namespace std;

int count1=0;
int Rev(char array[], int index, int length)
{
    if(length<0){
        cout<<"Palindrome"<<endl;
        return 0;
    }
	if (array[index] == array[length])
		Rev (array, index + 1, length-1);
	else{
		cout<<"Not Palindrome"<<endl;
		return 0;
	}


}



int main()
{
    char array[100],symbol;
    int n;
    int i,z;

    scanf ("%[^\n]s", array);

    int len = strlen(array);


    Rev(array, 0,len-1);

    return 0;
}



