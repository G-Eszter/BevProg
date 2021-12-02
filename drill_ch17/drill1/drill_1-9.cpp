#include "../../std_lib_facilities.h"
#include <ostream>

//4

void print_array10(ostream& os, int* a)
{
	os << '{';
	for(int i = 0; i < 10; ++i)
		{
			os << a[i];
			if(i != 9)
				os << ", ";
		}
	os << '}' << endl;
}

//7

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
	
	int* numbers = new int[10];
	
	//2
	
	cout << '{';
	for (int i = 0; i < 10; ++i)
		{
			cout << numbers[i];
			if(i != 9)
				cout << ',';
		}
	cout << '}' << endl;
	
	
	//3
	
	delete[]numbers;
	
	//5
	
	int* numbers10 = new int[10] {100,101,102,103,104,105,106,107,108,109,};
	print_array10(cout, numbers10);
	
	//6
	
	int* numbers11 = new int[11]{100,101,102,103,104,105,106,107,108,109,110};
	cout << '{';
	for (int i = 0; i < 11; ++i)
		{
			cout << numbers11[i];
			if(i != 10)
				cout << ',';
		}
	cout << '}' << endl;
	
	//8
	
	int size = 20;
	int* numbers20 = new int[size] {100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119};
	print_array(cout, numbers20, size);
	
	//9
	
	delete[] numbers20;
	
	return 0;
}
