#include<bits/stdc++.h>
using namespace std;

string printduplicte(string str)
{
	int array0[52]={0};
	string temp;
	for(int i=0;i<str.length();i++)
	{
		if(array0[str[i]]!=0)
		{
			temp.push_back(str[i]);
		}
		else
		{
			array0[str[i]]++;
		}
	}
	return temp;
}

int main()
{
	string str = "arvinda";
	str = printduplicte(str);
	cout<<"after duplicating "<<str;
}
