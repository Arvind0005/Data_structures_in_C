#include<bits/stdc++.h>
using namespace std;
char maxreturnstr(char* str)
{
	int max=0;
	int arrayst[256]={0}; //creates an integer array and sets all element is 0
	char result;
	for(int i=0;i<strlen(str);i++)
	{
		arrayst[str[i]]++;			//increment that particular ascii valued index;
		if(max<arrayst[str[i]])
		{
			max=arrayst[str[i]];
			result = str[i];
		}
	}
	return result;
}
int main()
{
	char* str ="hello world";
	cout<<"max recuuring char is "<<maxreturnstr(str);
	
}
