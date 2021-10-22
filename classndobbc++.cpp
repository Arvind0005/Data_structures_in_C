#include <bits/stdc++.h>
using namespace std;
class Airline
{
	public:
		string passenger_name;
		string passenger_id;
		string source;
		string destination;
		int fare;
		int number_of_passengers;
		Airline(string passenger_name0,string passenger_id0,string source0,string destintion0,int fare0,int number_of_passengers0)
		{
			passenger_name = passenger_name0;
			passenger_id =passenger_id0;
			source=source0;
			destination =destintion0;
			fare=fare0;
			number_of_passengers=number_of_passengers0;
		};
			
		total_fare()
		{
			int totalcost = (number_of_passengers*fare)*2;
			return totalcost;
		}


};
int main()
{
	int totalcost;
	Airline airline = Airline("Arvind","id00092","coimbatore","chennai",3000,10);
	totalcost = airline.total_fare();
	cout<<"\ntotal cost is "<<totalcost;
	return 0;
	
}
