#include<bits/stdc++.h>
using namespace std;

bool rotationcheck(string s1,string s2)
{
	if(s1.length()!=s2.length())
	{
		return false;
	}
	for(int i=0;i<s1.length();i++)
	{
		if(s1[i]!=s2[s2.length()-i-1])
		{
			cout<<"false\n";
			return false;
		}
	}
	return true;
}
int main()
{
	string s1="abcd",s2="dcba";
	cout<<rotationcheck(s1,s2);
}
