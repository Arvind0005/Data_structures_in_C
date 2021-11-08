#include<bits/stdc++.h>
using namespace std;

void printlast(int lastindex,string str)
{
	if(lastindex<0)
	{
		return;
	}
	cout<<str[lastindex];
	lastindex--;
	printlast(lastindex,str);
}
int main()
{
	string str="abcd";
	int lastindex=str.length()-1;
	printlast(lastindex,str);
}
