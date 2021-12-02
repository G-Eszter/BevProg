#include "../../std_lib_facilities.h"
#include <ostream>

void print_vector(ostream& os, vector<int> v)
{
	os << '{';
	for(int i = 0; i < v.size(); ++i)
	{
		os << v[i];
		if(i != v.size()-1)
			os << ", ";
	}
	os << '}' << endl;
}

int main()
{
	
	vector<int> numbers10 {100,101,102,103,104,105,106,107,108,109,};
	vector<int> numbers11 {100,101,102,103,104,105,106,107,108,109,110};
	vector <int> numbers20 {100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119};
	
	print_vector(cout, numbers10);
	print_vector(cout, numbers11);
	print_vector(cout, numbers20);
	
	return 0;
}
