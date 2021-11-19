#include "std_lib_facilities.h"
#include <fstream>
#include <vector>
using namespace std;
struct Point
{
	double x;
	double y;
};


istream& operator>>(istream &is, Point &p)
{

    char ch1;
    char ch2;
    char ch3;
    double x;
    double y;
    if(is >> ch1 >> x >> ch2 >> y >> ch3 && ch1 == '(' || ch2 == ',' || ch3 == ')')
       p = Point{x, y};
    else
    {
        is.clear(ios_base::failbit);
    }

    return is;
}

void ignoreLine()
{

  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main()
{
try
{
	cout << "Please enter 7 (x,y) points: " << endl;
   	vector<Point> original_points;
        for(int i = 1; i <= 7; ++i)
        {
            Point p;
            if(cin >> p)
            {
                original_points.push_back(p);
            }
            else
            {
                cout << "Incorrect point" << endl;
                cin.clear();
                ignoreLine();
                --i;
            }
        }

	
	cout << "The points: " << endl;
	
	for(const auto &i : original_points)
	{
            cout << '(' << i.x << ',' << i.y << ')' << endl;
        }
	
//output--------------------------------------------------------------
	
	ofstream outfile("mydata.txt");
	for(const auto &i : original_points)
	{
		outfile << '(' << i.x << ',' << i.y << ')' << endl;
	}
	outfile.close();
	
//input--------------------------------------------------------------
	
	
	ifstream infile;
	infile.open("mydata.txt");
	vector<Point> processed_points;
	if(infile.is_open())
	{
		while (infile.good())
		{
			Point p;
			if(cin >> p)
            		{
               		 processed_points.push_back(p);
           		}
     		}	
	}
	infile.close();
	
	cout << "Original points: " << endl;
	for(const auto &i : original_points)
	{
            cout << '(' << i.x << ',' << i.y << ')' << endl;
        }
	
	cout << "Processed points: " << endl;
	for(const auto &i : processed_points)
	{
            cout << '(' << i.x << ',' << i.y << ')' << endl;
        }
	
//compare the two vectors----------------------------------------
	
	if (original_points != processed_points)
	{
            cerr << "Something's wrong!\n";
        }
        
        else
        {
            cout << "Two vectors are the same\n";
        }
        
        return 0;
}
catch(const std::exception &e) 
{
        std::cerr << "Exception: " << e.what() << '\n';
        return 1;
}
catch(...)
{
        std:: cerr << "Exception: something went wrong.\n";
        return 2;
}
}
