////Find the largest subarray having an equal number of 0’s and 1’s
////Given a binary array containing 0’s and 1’s, find the largest subarray with equal numbers of 0’s and 1’s.
//We can use the map to solve this problem in linear time. The idea is to replace 0 with -1 and find out the largest subarray with a sum of 0. To find the largest subarray with a sum of 0, create an empty map that stores the first subarray’s ending index having a given sum. Then traverse the given array and maintain the sum of elements seen so far.
//
//If the sum is seen for the first time, insert the sum with its index into the map.
//If the sum is seen before, there exists a subarray with a sum of 0, which ends at the current index, and update the largest subarray if the current 
//subarray has more length.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[] ={ 0, 0, 1, 0, 1, 0, 0 },sum=0,len=0,si,ei;
	int size = sizeof(arr)/sizeof(arr[0]);
	map<int,int> m;
	m[0]=-1;
	for(int i=0;i<size;i++)
	{
		sum=sum+(arr[i]==0 ? -1:1);
		if(m.find(sum)==m.end())
		{
			m[sum]=i;
		}
		if(m.find(sum)!=m.end() && len < i-m[sum])
		{
			si=m[sum]+1;
			ei=i;
			len= i-m[sum];
		}
	}
	cout<<len<<" "<<si<<" "<<ei;
}
