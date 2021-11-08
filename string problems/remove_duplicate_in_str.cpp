#include<bits/stdc++.h>
using namespace std;
string removedup(string str)
{
	int arr[256]={0},index=0;
	string temp;

	for(int i=0;i<str.length();i++)
	{
		if(arr[str[i]]==0)
		{
			temp.push_back(str[i]);	
			index++;	
			arr[str[i]]++;
		}
	}
	return temp;
}
int main()
{
	string str = "aabcddefgghiiiiijjk";
	str = removedup(str);
	cout<<"after duplicating "<<str;
}
