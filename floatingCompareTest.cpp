#include "floatingCompare.h"
#include <iostream>
using namespace std;

int menu();
void doubleTests();
void floatTests();
void giveResult(bool val);
int testOptions(double a, double b);
int testOptions(float a, float b);


int main()
{
	char selection = 'n'; //used to see if user wishes to continue testing
	
	do
	{
		if(menu() == 1) //menu returns 1 if user wants to test doubles
		{
			doubleTests();
		}
		else //must be float as other return option for menu is 2 for floats
		{
			floatTests();
		}
		
		cout << "\nWould you like to do another comparison? (y/n) ";
		cin >> selection;
		
	}while(selection == 'y' || selection == 'Y');
		
	return 0;
}

int menu()
{
	int valid = true;
	int selection;
	
	do
	{
		cout << "\nHere are your options.";
		cout << "\n1: Compare doubles.";
		cout << "\n2: Compare floats.";
		cout << "\nWhich would you like to do? ";
		cin >> selection;
		
		if(selection == 1 || selection == 2)
		{
			valid = true; //it is a valid selection
		}
		else
		{
			cout << endl << selection << " is not a valid choice. "
				 << "Please choose 1 or 2.";
			valid = false; //not a valid option, keep going
		}
	}while(!valid);
	
	return selection;
}
void doubleTests()
{
	double a, b, c;
	char selection;
	int test;
	
	cout << "\nDo you wish to use a custom precision? (y/n) ";
	cin >> selection;
	
	if(selection == 'y' || selection == 'Y')
	{
		cout << "\nPlease enter the precision: ";
		cin >> c;
		
		do
		{
			cout << "\nPlease enter two double values: ";
			cin >> a >> b;
			
			do
			{
				test = testOptions(a,b);
			
				switch(test)
				{
					case 1:
					{
						giveResult(equalEqual(a,b,c));
						break;
					}
					case 2:
					{
						giveResult(notEqual(a,b,c));
						break;
					}
					case 3:
					{
						giveResult(lessEqual(a,b,c));
						break;
					}
					case 4:
					{
						giveResult(greaterEqual(a,b,c));
						break;
					}
					default:
					{
						cout << endl << test << " is not a valid selection.";
					}
				}
				
				cout << "\nWould you like to do another test "
					 << "with the same numbers? (y/n) ";
				cin >> selection;
				
			}while(selection == 'y' || selection == 'Y');
			
			cout << "\nWould you like to do another test? (y/n) ";
			cin >> selection;
			
		}while(selection == 'y' || selection == 'Y');
	}
	else //no custom precision
	{
		do
		{
			cout << "\nPlease enter two double values: ";
			cin >> a >> b;
			
			do
			{
				test = testOptions(a,b);
			
				switch(test)
				{
					case 1:
					{
						giveResult(equalEqual(a,b));
						break;
					}
					case 2:
					{
						giveResult(notEqual(a,b));
						break;
					}
					case 3:
					{
						giveResult(lessEqual(a,b));
						break;
					}
					case 4:
					{
						giveResult(greaterEqual(a,b));
						break;
					}
					default:
					{
						cout << endl << test << " is not a valid selection.";
					}
				}
				
				cout << "\nWould you like to do another test "
					 << "with the same numbers? (y/n) ";
				cin >> selection;
				
			}while(selection == 'y' || selection == 'Y');
			
			cout << "\nWould you like to do another test? (y/n) ";
			cin >> selection;
			
		}while(selection == 'y' || selection == 'Y');
	}
}
void floatTests()
{
	float a, b, c;
	char selection;
	int test;
	
	cout << "\nDo you wish to use a custom precision? (y/n) ";
	cin >> selection;
	
	if(selection == 'y' || selection == 'Y')
	{
		cout << "\nPlease enter the precision: ";
		cin >> c;
		
		do
		{
			cout << "\nPlease enter two float values: ";
			cin >> a >> b;
			
			do
			{
				test = testOptions(a,b);
			
				switch(test)
				{
					case 1:
					{
						giveResult(equalEqual(a,b,c));
						break;
					}
					case 2:
					{
						giveResult(notEqual(a,b,c));
						break;
					}
					case 3:
					{
						giveResult(lessEqual(a,b,c));
						break;
					}
					case 4:
					{
						giveResult(greaterEqual(a,b,c));
						break;
					}
					default:
					{
						cout << endl << test << " is not a valid selection.";
					}
				}
				
				cout << "\nWould you like to do another test "
					 << "with the same numbers? (y/n) ";
				cin >> selection;
				
			}while(selection == 'y' || selection == 'Y');
			
			cout << "\nWould you like to do another test? (y/n) ";
			cin >> selection;
			
		}while(selection == 'y' || selection == 'Y');
	}
	else //no custom precision
	{
		do
		{
			cout << "\nPlease enter two float values: ";
			cin >> a >> b;
			
			do
			{
				test = testOptions(a,b);
			
				switch(test)
				{
					case 1:
					{
						giveResult(equalEqual(a,b));
						break;
					}
					case 2:
					{
						giveResult(notEqual(a,b));
						break;
					}
					case 3:
					{
						giveResult(lessEqual(a,b));
						break;
					}
					case 4:
					{
						giveResult(greaterEqual(a,b));
						break;
					}
					default:
					{
						cout << endl << test << " is not a valid selection.";
					}
				}
				
				cout << "\nWould you like to do another test "
					 << "with the same numbers? (y/n) ";
				cin >> selection;
				
			}while(selection == 'y' || selection == 'Y');
			
			cout << "\nWould you like to do another test? (y/n) ";
			cin >> selection;
			
		}while(selection == 'y' || selection == 'Y');
	}
}
void giveResult(bool val)
{
	if(val)
		cout << "\nTRUE";
	else
		cout << "\nFALSE";
}
int testOptions(double a, double b)
{
	int test = 0;
	cout << "\nWhich operation would you like to do?";
	cout << "\n1: " << a << " == " << b;
	cout << "\n2: " << a << " != " << b;
	cout << "\n3: " << a << " <= " << b;
	cout << "\n4: " << a << " >= " << b;
	cout << "\nWhich test would you like to do? ";
	cin >> test;
	return test;
}
int testOptions(float a, float b)
{
	int test = 0;
	cout << "\nWhich operation would you like to do?";
	cout << "\n1: " << a << " == " << b;
	cout << "\n2: " << a << " != " << b;
	cout << "\n3: " << a << " <= " << b;
	cout << "\n4: " << a << " >= " << b;
	cout << "\nWhich test would you like to do? ";
	cin >> test;
	return test;
}
