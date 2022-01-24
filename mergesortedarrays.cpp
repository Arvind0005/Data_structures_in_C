
//merge two sorted array by by creating a new array
#include<bits/stdc++.h>
using namespace std;
void solution(int arr1[],int arr2[],int n1,int n2)
{
	int i= n1+n2,x=0,y=0,ind=0;
	int res[n1+n2];
	while(i>=0)
	{
		if(x>n1)
		{
			for(int j=ind+1;j<i;j++)
			{
				res[j]=arr2[y];
				y++;
			}
		}
		if(y>n2)
		{
			for(int j=ind+1;j<i;j++)
			{
				res[j]=arr1[x];
				x++;
			}
		}
		if(arr1[x]>arr2[y])
		{
			res[ind]=arr2[y];
	
			y++;
		}
		else if(arr1[x]==arr2[y])
		{
			res[ind]=arr1[x];
			res[ind+1]=arr1[x];
			ind=ind++;
			x++;
			y++;
		}
		else
		{
			res[ind]=arr1[x];
			x++;	
		}
		ind++;
		i--;
	}
	for(int i=0;i<=(n1+n2);i++)
	{
		cout<<res[i];
	}
}
int main()
{
	int arr1[]={1,3,4,5};
	int arr2[]={2,4,6,8};
	int n1=sizeof(arr1)/sizeof(arr1[0]);
	int n2 =sizeof(arr2)/sizeof(arr2[0]);
	solution(arr1,arr2,n1-1,n2-1);
}
