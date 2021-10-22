#include<bits/stdc++.h>
using namespace std;

class Bank
{
	public:
		string name;
		string phonenumber;
		int minimumbalance;
		int totalbalance;
		Bank(string name0,string phonenumber0)
		{
			name = name0;
			phonenumber=phonenumber0;
			minimumbalance =500;
			totalbalance=minimumbalance;
		}
		calldeposit(int amount)
		{
			totalbalance = deposit(amount);
		}
		callwithdraw(int amount)
		{
			totalbalance = withdraw(amount);
		}
	private:
		deposit(int amount)
		{
		//	int totalbalance;
			return totalbalance=totalbalance+amount;
		}
		withdraw(int amount)
		{
			return totalbalance=totalbalance-amount;
		}
	
};
int main()
{
	Bank bank = Bank("Arvind","9087442642");
	cout<<"minimum balance="<<bank.minimumbalance;
	cout<<"\ntotal balance b4 deposit ="<<bank.totalbalance;
	bank.calldeposit(1000);
	cout<<"\ntotal balance after deposit ="<<bank.totalbalance;
	bank.callwithdraw(500);
	cout<<"\ntotal balance after withdraw="<<bank.totalbalance;
	return 0;
}
