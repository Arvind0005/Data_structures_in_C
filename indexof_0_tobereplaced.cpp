//Maximum Consecutive Ones (If K Flip is Allowed)
//Find Index of 0 to be replaced with 1 to get longest continuous sequence of 1s in a binary array
//window algo
#include<iostream>
using namespace std;
int main()
{
	int arr[]={0,1,1,1,0,1,1,1,1,0,1,1},start=0,k=1,maxones=0,zerocount=0,fe,fs;
	int size =sizeof(arr)/sizeof(arr[0]);
	for(int end=0;end<size;end++)
	{

		if(arr[end]==0)
		{
			zerocount++;
		}
		while(zerocount>k)
		{
			if(arr[start]==0)
			{
				zerocount--;
			}
			start++;
			
		}
		if(maxones<(end-start+1))						//to print index
		{
			maxones=end-start+1;
			fe=end;
			fs=start;
		}
	
	
	}
	for(int i=fs;i<fe;i++)
	{	
		if(arr[i]==0)
		{
			cout<<i<<"\n";
		}
	}
	cout<<maxones;								//print maxones can be formed
	
}

