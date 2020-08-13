#include<bits/stdc++.h>

using namespace std;

void Combination(int a[], int reqLen, int start, int currLen, bool check[], int len)
{

	if(currLen > reqLen)
	return;
	else if (currLen == reqLen)
	{
		for (int i = 0; i < len; i++)
		{
			if (check[i] == true)
			{
				cout<<a[i]<<" ";
			}
		}
		cout<<"\n";
		return;
	}

	if (start == len)
	{
		return;
	}

	check[start] = true;
	Combination(a, reqLen, start + 1, currLen + 1, check, len);
	check[start] = false;
	Combination(a, reqLen, start + 1, currLen, check, len);
}

int main()
{
	int i, n;

	cout<<"Enter the number of element array have: ";
	cin>>n;
    bool check[n];
	int arr[n];

	for(i = 0; i < n; i++)
	{
		cin>>arr[i];
		check[i] = false;
	}

	for(i = 1; i <= n; i++)
	{
		Combination(arr, i, 0, 0, check, n);
	}
	return 0;
}
