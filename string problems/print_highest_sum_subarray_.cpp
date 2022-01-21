#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0;
	cin>>n;
	int arr[n];
	priority_queue<int> q;
	for(int i=0;i<n;i++)
	{
		int num;
		cin>>num;
		sum=sum+num;
		q.push(sum);
	}
	cout<<q.top();
}
