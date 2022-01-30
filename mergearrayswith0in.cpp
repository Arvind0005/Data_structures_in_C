#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int arr1[n],arr2[m];
	for(int i=0;i<n;i++)
	{
		cin>>arr1[i];
	}
	for(int i=0;i<m;i++)
	{
		cin>>arr2[i];
	}
	int k=0;
	int size =sizeof(arr2)/sizeof(arr2[0]);
	for(int i=0;i<size;i++)
	{
		if(arr2[i]!=0)
		{
			arr2[k]=arr2[i];
			k++;
		}
	}
	m=m-n;
	for(int i=0;i<m;i++)
	{
		cout<<arr2[i];
	}
	int le1=0,le2=0,x[m+n],index;
	size=m+n;
	for(int i=0;i<size;i++)
	{
		if(arr1[le1]>arr2[le2])
		{
			x[i]=arr2[le2];
			le2++;
		}
		else
		{
			x[i]=arr1[le1];
			le1++;
		}
	}
	for(int i=0;i<size;i++)
	{
		cout<<x[i];
	}
}
