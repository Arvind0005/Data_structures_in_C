#include<bits/stdc++.h>
using namespace std;

void length_encoded(string str)
{
	int arr[52];
	char currentchar=' ';
	for(int i=0;i<str.length();i++)
	{
		arr[str[i]]++;
	}
	for(int i=0;i<str.length();i++)
	{
	//	cout<<str[i];
		if(str[i]!=currentchar)
		{
			cout<<str[i]<<arr[str[i]];
			currentchar=str[i];
		}
	}
}

int main()
{
	string str ="wwwwaaadexxxxxx";
	length_encoded(str);
}
