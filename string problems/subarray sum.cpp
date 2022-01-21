//Given an integer array, find the maximum length subarray having a given sum.
#include<bits/stdc++.h>
using namespace std;
void solution(int arr[],int size,int target)
{
	int sum=0,len=0,templen=0,si,ei;
	//	for(int i=0;i<size;i++)
	//	{
	//		for(int j=i+1;j<size;j++)
	//		{
	//			templen++;
	//			sum=sum+arr[j];
	//			if(target==sum)
	//			{	
	//			
	//				if(templen>len)
	//				{
	//					len=templen;
	//					si=i;
	//					ei=j;
	//				}
	//			}
	//		}
	//		templen=0;
	//		sum=0;
	//	}
	//	cout<<len;
	unordered_map<int,int> m;
	m.insert(pair<int,int>(0,-1));
	m[0]=-1;
	for(int i=0;i<size;i++)
	{
		sum=sum+arr[i];
		if(m.find(sum)==m.end())
		{
			m[sum]=i;
		}
		if(m.find(sum-target)!=m.end())
		{
			if(((i-m[sum-target])>len))
			{
				len = i - m[sum-target];
			}
		}
	}
	cout<<len;
	
}
int main()
{
	int arr[] = { 5, 6, -5, 5, 3, 5, 3, -2, 0 };
	int target=8;
	int size =sizeof(arr)/sizeof(arr[0]);
	solution(arr,size,target);
	
}
