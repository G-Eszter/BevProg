#include "../std_lib_facilities.h"

void suspicious(vector<int>&v, int s)
{
	int* p = new int[s];
	vector<int> v1;
	//..
	int* q = new int[s];
	vector<double> v2;
	//..
	delete[] p;
	delete[] q;
}

int main()
{
try
{
	vector <int> a {};
	suspicious(a, 10);
	return 0;
}
catch(exception& e)
{
	cerr << "error: " << e.bad_alloc() << "\n";
	return 1;
}
}
