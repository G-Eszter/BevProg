#include "../std_lib_facilities.h"

struct Date 
{
	int y; // year
	int m; // month in year
	int d; // day of month
};

void init_day(Date& dd, int y, int m, int d)
{
	if(y<0)
		error("Invalid year");
	else
		dd.y = y;
		
	if(m < 1 || m > 12)
		error("Invalid month");
	else
		dd.m = m;
		
	if(d < 1 || d > 31)
		error("Invalid day");
	else
		dd.d = d;
}

void add_day(Date& dd, int n)
{
	dd.d += n;
	
	if(dd.d > 31)
	{
		dd.m +=1;
		dd.d -= 31;
		
		if(dd.m > 12)
		{
			dd.y +=1;
			dd.m -= 12;
		}
	}
}

ostream& operator<<(ostream& os, const Date& d)
{
    return os << '(' << d.y
              << ',' << d.m
              << ',' << d.d << ')';
}

int main()
{
	try
	{
		Date today;
   		init_day(today, 1978, 6, 25);
   		
   	 	Date tomorrow{today};
   		add_day(tomorrow,1);
   		 
   		 cout << "today " << today << endl;
   		 cout << "tomorrow " << tomorrow << endl;
   	
   		Date test{today};
   		init_day(test, 2004, 12, -5);
   		cout << "test: " << test << endl;
		return 0;
	}
	catch(exception& e)
	{
   		cerr << e.what() << '\n';
    		return 1;
	}
	catch(...)
	{
		cerr << "Unknown exception!!\n";
		return 2;
	}
}
