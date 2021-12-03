#include "../../std_lib_facilities.h"

//1

int ga[10] {1,2,4,8,16,32,64,128,256,512};

//2-3

void f(int x[], int n)
{
	int la[10];
	for(int i = 0; i < 10; ++i)
	{
		la[i] = x[i];
	}
	
	cout << '{';
	for(int i = 0; i < 10; ++i)
	{
		cout << la[i];
		if (i != 9)
			cout << ", " ;
	}
	cout << '}' << endl;;
	
	int *p = new int[n];
	int *p1 = p;
	
	for(int i = 0; i < n; ++i)
	{
		*p1 = x[i];
		p1++;
	}
	
	p1 = p;
	
	cout << '{';
	for (int i = 0; i < n; ++i)
	{
		cout << p1[i];
		if (i != (n-1))
			cout << ", ";
	}
	cout << '}' << endl;
	
	delete[] p;
}

int main()
{
	//4
	
	f(ga, 10);
	
	int aa[10];
	for(int i = 0; i < 10; ++i)
	{
		if(i == 0)
			aa[i] = 1;
		else
			aa[i] = aa[i-1] * (i+1);
	}
	
	f(aa, 10);
	
	return 0;
}
