#include<bits/stdc++.h>
using namespace std;
string removecommonchar(string str1,string str2)
{
	int arr[52]={0};
	string temp;
	for(int i=0;i<str2.length();i++)
	{
		arr[str2[i]]++;	
	}
	for(int i=0;i<str1.length();i++)
	{
		if(arr[str1[i]]==0)
		{
			temp.push_back(str1[i]);
		}
	}
	return temp;
}

int main()
{
	string str1 = "hello world",str2="hii";
	str1=removecommonchar(str1,str2);
	cout<<str1;
}

