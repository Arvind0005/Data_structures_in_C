#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[10]={9,4,6,10,99,86,738,98,0,2},j,k,temp;
	cout<<"array before sorting \n";
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
	for(k=1;k<10;k++)
	{
		temp=arr[k];
		j=k-1;
		while(j>=0 && temp<=arr[j])
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=temp;
	}
	cout<<"\n";
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
		
	}
}

