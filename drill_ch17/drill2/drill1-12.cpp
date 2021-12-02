#include "../../std_lib_facilities.h"
#include <ostream>

void print_array(ostream& os, int* a, int n)
{
	os << '{';
	for(int i = 0; i < n; ++i)
		{
			os << a[i];
			if(i != n-1)
				os << ", ";
		}
	os << '}' << endl;
}

int main()
{
	//1
	
	int* p1 = new int {7};
	
	//2
	
	cout << p1 << endl << *p1 << endl;
	
	//3
	
	int* seven = new int[7] {1,2,4,8,16,32,64};
	int* p2 = seven;
	
	//4
	
	cout << p2 << endl;
	print_array(cout, seven, 7);
	
	//5
	
	int* p3 = p2;
	
	//6
	
	p2 = p1;
	
	//7
	
	p2 = p3;
	
	//8
	
	cout << p1 << endl << *p1 << endl;
	cout << p2 << endl << *p2 << endl;
	
	//9
	
	delete[] p1;
	delete[] p2;
	delete[] p3;
	
	//10
	
	p1 = new int[10] {1,2,4,8,16,32,64,128,512};
	
	//11
	
	p2 = new int[10];
	
	//12
	
	p2 = p1;
	
	print_array(cout, p2, 10);
	
	return 0;
}
