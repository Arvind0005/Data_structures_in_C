#include<bits/stdc++.h>
using namespace std;
int hash(int key);
int main()
{
	string str="abcd" ,str2 = "dcba";
	bool ispalindrome=true;
	for(int i=0;i < (str.length());i++)
	{
		if(str[i]!=str2[(str.length())-i-1])
		{
			ispalindrome=false;
		}
	}
	cout<<ispalindrome;
}
