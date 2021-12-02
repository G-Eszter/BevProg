#include "../../std_lib_facilities.h"

int main()
{
	vector<int>* p1 = new vector<int> {1,2,4,8,16,32,64,128,512};
	vector<int>* p2 = new vector<int> (10);
	p2 = p1;
	
	cout << p1 << endl;
	cout << p2 << endl;
	return 0;
}
