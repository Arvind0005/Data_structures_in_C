/*Given an integer array, find the maximum product of two integers in it.

For example, consider array {-10, -3, 5, 6, -2}. The maximum product is the (-10, -3) or (5, 6) pair.*/
#include<bits/stdc++.h>
using namespace std;
void solution(int arr[],int n)
{
//	for(int i=1;i<n;i++)
//	{
//		if(arr[i]>max1)
//		{
//			max2=max1;
//			max1=arr[i];
//		}
//		else if(arr[i]>max2)
//		{
//			max2=arr[i];
//		}
//		if(arr[i]<min1)
//		{
//			min2=min1;
//			min1=arr[i];
//		}
//		else if(arr[i]<min2)
//		{
//			min2=arr[i];
//		}
//	}
//	if((max1*max2)>(min1*min2))
//	{
//		cout<<max1<<" "<<max2;
//	}
//	else
//	{
//		cout<<min1<<" "<<min2;
//	}	
//	sort(arr,arr+n);
	if(n<2)
	{
		return;
	}
	else if((arr[0]*arr[1])>(arr[n-1]*arr[n-2]))
	{
		cout<<arr[0]<<" "<<arr[1];
	}
	else
	{
		cout<<arr[n-1]<<" "<<arr[n-2];
	}
//	for(int i=0;i<n;i++)
//	{
//		cout<<arr[i];
//	}
}
int main()
{
	int arr[]= { -10, -3, 5, 6, -2 },max1=arr[0],max2=INT_MIN,min1=arr[0],min2=INT_MAX;
	int n= sizeof(arr)/sizeof(arr[0]);
	solution(arr,n);
}
