#include "../std_lib_facilities.h"

struct Date
{
	int y, m ,d;
public:
	Date(int yy, int mm, int dd);
	void add_day(int n);
	int year () const {return y;}
	int month () const {return m;}
	int day () const {return d;}
};

Date::Date(int yy, int mm, int dd)
{
	if (yy < 0)
		error("Invalid year");
	else
		y=yy;
	
	if(mm < 1 || mm > 12)
		error("Invalid month");
	else
		m=mm;
	
	if(dd < 1 || dd > 31)
		error("Invalid day");
	else
		d=dd;
}

void Date::add_day(int n)
{
	d += n;
	
	if(d > 31)
	{
		m++;
		d -=31;
		
		if (m > 12)
		{
			y++;
			m -=12;
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
		Date today{1978, 6, 25};
    
		Date tomorrow{today};
		tomorrow.add_day(1);
	
		cout << "today " << today << endl;
		cout << "tomorrow " << tomorrow << endl;
		
		Date test{2004,15,15};
		cout << "test " << test << endl;
	
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
