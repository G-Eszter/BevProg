#include "../../std_lib_facilities.h"

//1

vector<int> gv {1,2,4,8,16,32,64,128,256,512};

//2-3

void f(vector<int> v)
{
	vector<int> lv {v};
	
	cout << '{';
	for(int i = 0; i < lv.size(); ++i)
	{
		cout << lv[i];
		if (i != lv.size()-1)
			cout << ", ";
	}
	cout << '}' << endl;
	
	vector<int> lv2 {v};
	
	cout << '{';
	for(int i = 0; i < lv2.size(); ++i)
	{
		cout << lv2[i];
		if (i != lv2.size()-1)
			cout << ", ";
	}
	cout << '}' << endl;
}
int main()
{
	//4
	
	f(gv);
	
	vector <int> vv {};
	for(int i = 0; i < 10; ++i)
	{
		if (i == 0)
			vv.push_back(1);
		else
			vv.push_back(vv[i-1] * (i+1));
	}
	
	f(vv);
	
	return 0;
}
