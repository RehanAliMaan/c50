#include <iostream>
using namespace std;
int main()
{
	int day,month,total;
	int days_per_month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	cout<<"enter the day";
	cin>>day;
	cout<<"enter the month";
	cin>>month;
	total=day;
	for(int x=0;x<month;x++)
	total=total+days_per_month[x];
	cout<<"the number of days in this year till date="<<total<<endl;
	return 0;
}