#include<bits/stdc++.h>
using namespace std;
int hash(int key);
int main()
{
	char *str1="arvind",*str2="Arvind S",*temp;
	temp= str1;
	str1=str2;
	str2=temp;
	cout<<str1;
	
	return 0;
}

