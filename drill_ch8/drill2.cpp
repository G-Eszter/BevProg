#include "../std_lib_facilities.h"

void swap_v(int a,int b)
{
	int temp;
	temp = a;
	a=b;
	b=temp;
	cout << "after swap_v, a: " << a << " b: " << b << endl;
}

void swap_r(int& a,int& b)
{
	int temp;
   	temp = a;
   	a = b;
   	b = temp;
   	cout << "after swap_r, a: " << a << " b: " << b << endl;
}

/*
	cannot assign to a constant
void swap_cr(const int& a, const int& b)
{
	int temp;
   	temp = a;
   	a = b;
   	b = temp;
   	cout << "after swap_cr, a: " << a << "b: " << b << endl;
}
*/

int main()
{
	int x = 7;
	int y =9;
	cout << "x = " << x << ", y = " << y << endl;
	
	swap_v(x,y);
	swap_r(x,y);
	// swap_cr(x,y);    cannot change constants
	cout << "x is now = " << x << " and y is now = " << y << endl;
	
	swap_v(7, 9);
	// swap_r(7,9);     needs a variable to refer to
    	// swap_cr(7,9);    cannot change constants
    	
	const int cx = 7;
	const int cy = 9;
	cout << "cx = " << cx << ", cy = " << cy << endl;
	
	swap_v(cx,cy);
	// swap_r(cx, cy);     cannot use const for non-const ref
   	// swap_cr(cx, cy);    cannot change constants
	cout << "cx is now = " << cx << ", cy is now = " << cy << endl << endl;
	
	swap_v(7.7,9.9);
	// swap_r(7.7,9.9)      needs a variable to refer to
  	// swap_cr(7.7,9.9)      cannot change constants in pass-by-const
  	
	double dx = 7.7;
	double dy = 9.9;
	cout << "dx = " << dx << ", dy = " << dy << endl;
	
	swap_v(dx,dy);
	// swap_r(dx, dy);      cannot convert double to int&
   	// swap_cr(dx, dy);      cannot change constants in pass-by-const
	cout << "dx is now = " << dx << ", dy is now = " << dy << endl << endl;
	
	swap_v(7.7,9.9);
	// swap_r(7.7, 9.9);    cannot convert double to int&
  	// swap_cr(7.7, 9.9);      cannot change constants in pass-by-const
  	
	return 0;
}
