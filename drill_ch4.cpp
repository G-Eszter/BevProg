#include "std_lib_facilities.h"

int main()
{
	vector<double> v;
	double x, x_m=0, min, max, sum=0, c;
	double difference;
	bool first = true;
	string value;
	int piece =0;
	double cm_to_m = 0.01;
 	double in_to_m = 2.54 * cm_to_m;
 	double ft_to_m = 12 * in_to_m;
 	vector<string> legal_units {"cm", "m", "in", "ft"};
 	vector<string> illegal_units {"y", "yard", "km", "gallons", "meter"};
 	
	cout << "Please enter a value: " << endl;
	
	while(cin >> x >> value)
	{
		if(x == '|')
			break;
		for(int i= 0; i < illegal_units.size(); ++i)
		{
			if(value == illegal_units[i])
			error("illegal unite!\n");
		}
			
		if (value == "m")
			x_m =x;
		
		cout << x << value;
		
		if (value == "cm")
		{
			x_m = x * cm_to_m;
			cout << " (" << x_m << " m)";
		}
				
		if (value == "in")
		{
			x_m = x * in_to_m;
			cout << " (" << x_m << " m)";
		}
				
		if (value == "ft")
		{
			x_m = x * ft_to_m;
			cout << " (" << x_m << " m)";
		}
		
		v.push_back(x_m);
			/*if(x>y)
			{
				cout << "The smaller value is: " << y << endl;
				cout << "The larger value is: " << x << endl;
			}
			else if (x<y)
			{
				cout << "The smaller value is: " << x << endl;
				cout << "The larger value is: " << y << endl;
			}
			else if (x==y)
				cout << "The numbers are equal" << endl;
			difference = x-y;
			if (difference > 0 && difference < 1.0/100 || difference < 0 && difference > -1.0/100)
				cout << "The numbers are almost equal." << endl;*/
				
		if (first == true)
		{
			first = false;
			min = x_m;
			max = x_m;
			cout << " is the first value and therefore the smallest and largest so far.\n";
		}
			
		if (first != true)
		{
			if(x_m>max)
			{
				cout << " the largest so far\n";
				max=x_m;
			}
				
			else if(x_m<min)
			{
				cout << " the smallest so far\n";
				min = x_m;
			}
				
			else
				cout << "\n";
		}
		
		++piece;
		sum += x_m;
	}
	
	cout << "minimum: " << min << " m"  << endl;
	cout << "maximum: " << max <<" m"  << endl;
	cout << "sum: " << sum << " m" << endl;
	cout << "the number of values: " << piece << endl;
	
	sort(v);
	
	for(int i=0; i<v.size(); ++i)
		cout << v[i] << " m" << endl;
		
	return 0;
}
