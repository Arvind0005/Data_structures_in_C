#include<bits/stdc++.h>
using namespace std;

class Emp
{
	public:
		int eno;
		string ename;
		string designation;
		Emp()
		{
			eno=1111;
			ename="defaultname";
			designation="default_designation";
		}
		get()
		{
			cout<<"enter name\nenter enumber\nenter designation";
			cin>>ename>>eno>>designation;
		}
//		display()
//		{
//				cout<<"\nname: "<<ename<<"\nenter enumber: "<<eno<<"\nenter designation: "<<designation;
//		}
	
	
};
class Salery : public Emp {
	public:
		int salery=5000;
		calc()
		{
			salery=salery*12;
		}
		display()
		{
			cout<<"\nname: "<<ename<<"\nenumber: "<<eno<<"\ndesignation: "<<designation<<"\nsalery: "<<salery;
		}
};
int main()
{
	Salery emp =Salery();
	emp.get();
	emp.calc();
	emp.display();
	
}
