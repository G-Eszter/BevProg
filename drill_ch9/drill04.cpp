#include "../std_lib_facilities.h"

enum class Month
{
    jan = 1,
    feb,
    mar,
    apr,
    may,
    jun,
    jul,
    aug,
    sep,
    oct,
    nov,
    dec
};

struct Date
{
   public:
    class Invalid {};
    Date(int yy, Month mm, int dd);   
    void add_day(int n);               
    Month month() const { return m; }  
    int day() const { return d; }      
    int year() const { return y; }     

   private:
    int y;  
    Month m;
    int d;  
    bool is_valid();
};

Date::Date(int yy, Month mm, int dd)
    : y{yy}, m{mm}, d{dd} 
{
    if (!is_valid())
        throw Invalid{};
}

bool Date::is_valid()
{
    if (d < 1 || d > 31) return false;
    if (m < Month::jan || m > Month::dec) return false;
    return true;
}

Month operator++(Month& m)  
{
    m = (m == Month::dec) ? Month::jan : Month(int(m) + 1);  
    return m;
}

Month operator--(Month& m)  
{
    m = (m == Month::jan) ? Month::dec : Month(int(m) - 1);  
    return m;
}

Month& operator+=(Month& m, int n)
{
    for (int i = 0; i < n; ++i)
    {
        ++m;
    }
    return m;
}

Month& operator-=(Month& m, int n)
{
    for (int i = 0; i < n; ++i)
    {
        --m;
    }
    return m;
}

bool operator<(const Month& m, int n) { return int(m) < n; }
bool operator>(const Month& m, int n) { return int(m) > n; }

void Date::add_day(int n)
{
    d += n;

    int count_days{d + (int(month()) - 1) * 31};  
    const int year_in_days{12 * 31};              

    int year_index{0};
    
    if (count_days >= 0)
    {
        year_index = count_days / year_in_days;
        y += year_index;
    }
    
    else
    {
        
        count_days = -count_days;
        --y;

        year_index = count_days / year_in_days;
        y -= year_index;
    }

    if (d > 31) 
    {
        while (true)
        {
            ++m;
            d -= 31;
            if (d <= 31) break;
        }
    } else if (d < 1)
    {
        while (true)
        {
            --m;
            d += 31;
            if (d >= 1) break;
        }
    }
}

ostream& operator<<(ostream& os, const Date& d)
{
    return os << '(' << d.year() << ',' << int(d.month()) << ',' << d.day() << ')';
}

int main()
{
    try
    {
        Date today{1978, Month::jun, 25};
        
        Date tomorrow{today};
        tomorrow.add_day(1);

        cout << "today: " << today << endl;
        cout << "tomorrow: " << tomorrow << endl;

        Date test{2004, Month::dec, 90};
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
