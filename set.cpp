#include<bits/stdc++.h>
using namespace std;
class Setexp
{
	public:
	set<int> insert(set<int> s,int n)
	{
		for(int i=0;i<n;i++)
		{
			int num;
			cin>>num;
			s.insert(num);	
		}
		return s;	 	
	}
	void display(set<int> s)
	{
		for(set<int>::iterator it=s.begin();it!=s.end();it++)
		{
			cout<<*it<<"\n";
		}
	}
	void size(set<int> s)
	{
		cout<<s.size();
	}
	set<int> erase(set<int> s)
	{
		s.erase(3);
		return s;
	}
	set<int> remove(set<int> s)
	{
		s.clear();
		return s;
	}
};
int main()
{
	set<int> s;
	int n=5;
	Setexp setexp;
	s=setexp.insert(s,n);
	setexp.display(s);
	setexp.size(s);
	s=setexp.erase(s);
	cout<<"after\n";
	setexp.display(s);
	s=setexp.remove(s);
	cout<<"\nremoved";
	setexp.display(s);
}
