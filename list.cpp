#include<bits/stdc++.h>
using namespace std;
int main()
{
	int search=3;
	list<int> l;
	int n=5;
	for(int i=0;i<n;i++)
	{
		int num;
		cin>>num;
		l.push_back(num);	
	}
	for(list<int>::iterator it=l.begin();it!=l.end();it++)
	{
		cout<<*it<<"\n";
	}
	list<int>::iterator it = find(l.begin(),l.end(),search);
		cout<<"list end"<<*l.end()<<"\n";
		if(*it!=*l.end())
		{
			cout<<"found in between";
		}
		else
		{
			cout<<"not found";
		}
		cout<<"last element"<<l.back();
}

