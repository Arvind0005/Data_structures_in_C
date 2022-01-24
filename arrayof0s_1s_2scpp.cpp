#include<bits/stdc++.h>
using namespace std;

int swap(int arr[],int x,int y)
{
	int temp;
	temp=arr[x];
	arr[x]=arr[y];
	arr[y]=temp;
//	return arr;
}

void solution(int arr[],int n)
{
	int p=1;
	int* parr;
	int l=0,m=0,h=n-1;
	while(m<=h)
	{
		if(arr[m]<p)
		{
			swap(arr,m,l);
			l++;
			m++;
		}
		else if(arr[m]==p)
		{
			m++;
		}
		else if(arr[m]>p)
		{
			swap(arr,m,h);
			h--;
		}
	}
	for(int i=0;i<n;i++)
	{
	//	cout<<"h"<<'';
		cout<<arr[i];
	}
}
int main()
{
	int arr[]={0,1,2,0,1,2};
	int size =sizeof(arr)/sizeof(arr[0]);
	solution(arr,size);
}
