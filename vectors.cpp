//Vector is a kind of array with a lot of extra functionalities. You must have used arrays and must be dissatisfied with the limitations of arrays. Vectors come into rescue.
#include<iostream>
#include<vector>
using namespace std;

class Vector_examp
{
	public:
		void display(vector<int> v)
		{
			for(vector<int>::iterator i=v.begin();i!=v.end();i++)
			{
				cout<<*i;	
			}	
		}
		vector<int> get(vector<int> v,int n)
		{
			for(int i=0;i<n;i++)
			{
				int value;
				cin>>value;
				v.push_back(value);	
			}
			return v;	
		}
		int front(vector<int> v)
		{
			return v.front();
		}
		int size(vector<int> v)
		{
			return v.size();
		}
		bool isEmpty(vector<int> v)
		{
			return v.empty();
		}
		vector<int> pop_back(vector<int> v)
		{
			v.pop_back();
			return v;
		}
		vector<int> erase(vector<int> v)
		{
			for(vector<int>::iterator it=v.begin();it!=v.end();it++)
			{
				if((*it)>3)
				{
					v.erase(it);
				}
			}
			return v;
		}
			
};
int main()
{
	vector<int> v;
	Vector_examp vectorex;
	v=vectorex.get(v,5);
//	vector<int>::iterator n =v.begin();
//	cout<<*n;
	v=vectorex.pop_back(v);
	v=vectorex.erase(v);
	cout<<vectorex.isEmpty(v);
	vectorex.display(v);
//	vectorex.display(v);
}
