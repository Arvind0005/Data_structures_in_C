#include<bits/stdc++.h>
using namespace std;
class Pqexp
{
	public:
		priority_queue<int> insert(priority_queue<int> q,int n)
		{
			for(int i=0;i<n;i++)
			{
				int num;
				cin>>num;
				q.push(num);
			}
			return q;
		}
		void display(priority_queue<int> q)
		{
			while(!q.empty())
			{
				cout<<q.top()<<"\n";
				q.pop();
			}
		}
			
};
int main()
{
	priority_queue<int> q;
	int n=5;
	Pqexp pq;
	q=pq.insert(q,n);
	pq.display(q);
}
