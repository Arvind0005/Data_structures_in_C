#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[] ={1,2,3,4,5,6,7,8},start=0;
	int size= sizeof(arr)/sizeof(arr[0]);
	srand(time(NULL));
	for(int end=1;end<size;end++)
	{
		int rands =rand();
		rands=rands%end;
		int temp=arr[rands];
		arr[rands]=arr[end];
		arr[end]=temp;

	}
	for(int i=0;i<size;i++)
	{
		cout<<arr[i];
	}
}
