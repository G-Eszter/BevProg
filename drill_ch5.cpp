#include "std_lib_facilities.h"

int main()

try {
	cout << "Success!\n";
	cout << "Success!\n";
	cout << "Success" << "!\n";
	cout << "success" << '\n';
	int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
	vector<int> ve(10); ve[5] = 7; if (ve[5]==7) cout << "Success!\n";
	bool cond = true; if (cond) cout << "Success!\n"; else cout << "Fail!\n";
	bool c = true; if (c) cout << "Success!\n"; else cout << "Fail!\n";
	bool d = "fool"; if (d) cout << "Success!\n";
	string s = "fool"; if (s=="fool") cout << "Success!\n";
	if (s=="fool") cout << "Success!\n";
	if (s=="fool") cout << "Success!\n";
	vector <char> vec(5); for (int i=0; i<vec.size(); ++i)  cout << "Success!\n";
	for (int i=0; i<=vec.size(); ++i)  cout << "Success!\n";
	string se = "Success!\n"; for (int i=0; i<6; ++i) cout << se;
	if (true) ( cout << "Success!\n"); else cout << "Fail!\n";
	int x = 2000; char c0 = 'x'; if (x==2000) cout << "Success!\n";
	s = "Success!\n"; for (int i=0; i<10; ++i) cout << s;
	vector <int> vect(5); for (int i=0; i<=vect.size(); ++i)  cout << "Success!\n";
	int i=0; int j = 9; while (i<10) {++i; if (j>i) cout << "Success!\n";}
	double x0 = 3; double d0 = 5/(x0-2); if (d0==2*x0-1) cout << "Success!\n";
	string s0 = "Success!\n"; for (int i=0; i<=10; ++i) cout << s0;
	int i0=0; int j0=0;  while (i0<10) {++i0; if (j0<i0) cout << "Success!\n";}
	int x1 = 4; double d1 = 5/(x1-2); if (d1=x1-3*0.5) cout << "Success!\n";
	cout << "Success!\n";
	
	keep_window_open();
	return 0;
	}
	catch (exception& e) {
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
	return 1;
	}
	catch (...) {
	cerr << "Oops: unknown exception!\n";
	keep_window_open();
	return 2;
}
