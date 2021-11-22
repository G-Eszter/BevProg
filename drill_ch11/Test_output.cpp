#include "std_lib_facilities.h"

int main()
{
	try
	{
		cout << "1-7." << endl;
		int birth_year = 2002;
	
		cout << showbase << "\nBirth year in decimal: " << birth_year << endl;
		cout << showbase << "In hexadecimal: " << hex << birth_year << endl;
		cout << showbase << "In octal: "  << oct << birth_year << endl;
	
	
		int current_year = 2021;
  		int age = current_year - birth_year;
		cout << dec << age << endl;

		cout << "\n8." << endl;
		int a, b, c, d;
 		cout << "\nPlease enter the number '1234' four times: \n";
		cin >> a >> oct >> b >> hex >> c >> d;
		cout << a << '\t' << b << '\t' << c << '\t' << d << '\n';
		
		cout << "\n9." << endl;
		cout << endl << 1234567.89 << endl;
      		cout << fixed << 1234567.89 << endl;
        	cout << scientific << 1234567.89 << endl;


		cout << "\n10." << endl;
		
		cout << setw(6) << "name" << '\t' << "Gömöri Eszter" << endl
      		<< setw(6) << "phone" << '\t' << "0630 123 4567" << endl
        	<< setw(6) << "email" << '\t' << "gomorieszter2002@gmail.com" << endl << endl;
    
    		cout << setw(6) << "name" << '\t' << "X Y" << endl
        	<< setw(6) << "phone" << '\t' << "0620 123 4567" << endl
        	<< setw(6) << "email" << '\t' << "XY@gmail.com" << endl << endl;

    		cout << setw(6) << "name" << '\t' << "Y X" << endl
        	<< setw(6) << "phone" << '\t' << "0630 234 5678" << endl
        	<< setw(6) << "email" << '\t' << "YX@gmail.com" << endl << endl;
    
    		cout << setw(6) << "name" << '\t' << "Y Z" << endl
        	<< setw(6) << "phone" << '\t' << "0620 234 5678" << endl
        	<< setw(6) << "email" << '\t' << "YZ@gmail.com" << endl << endl;
    
		cout << setw(6) << "name" << '\t' << "Z Y" << endl
	        << setw(6) << "phone" << '\t' << "0630 345 6789" << endl
	        << setw(6) << "email" << '\t' << "ZY@gmail.com" << endl << endl;
    
		cout << setw(6) << "name" << '\t' << "X Z" << endl
        	<< setw(6) << "phone" << '\t' << "0620 345 6789" << endl
        	<< setw(6) << "email" << '\t' << "XZ@gmail.com" << endl << endl;
		
		return 0;
	}
catch(exception& e)
	{	
   		 cerr << e.what() << '\n';
   		 return 1;
	}
catch(...)
	{
    		cerr << "Unknown exception!" << '\n';
    		return 2;
	}
}
