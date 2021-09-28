#include "std_lib_facilities.h"

int main()
{
	string name, friend_name;
	cout << "Enter the name of the person you want to write to\n";
	cin >> name;
	
	cout <<"Dear " << name << "," << endl;
	cout << "\tHow are you? I am fine. I miss you.\n";
	
	cout << "Enter the name of your friend\n";
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?" << endl;
	
	char friend_sex=0;
	cout << "Enter an m if the friend is male and an f if the friend is female\n";
	cin >> friend_sex;
	
	if(friend_sex=='m')
		cout << "If you see "<< friend_name << " please ask him to call me." << endl;
	if(friend_sex=='f')
		cout << "If you see "<< friend_name << " please ask her to call me." << endl;
		
	int age;
	cout << "Enter the age of the recipient\n";
	cin >> age;
	if(age<=0 || age>=110)
		simple_error("you're kidding!");
	else
		cout << "I hear you just had a birthday and you are " << age << " years old.\n";
		
	if (age<12)
		cout << "Next year you will be " << age+1 << "." << endl;
	else if (age==17)
		cout << "Next year you will be able to vote." << endl;
	else if (age >70)
		cout << "I hope you are enjoying retirement." << endl;
		
	cout << "Yours sincerely\n\nEszter\n";
	return 0;
}
