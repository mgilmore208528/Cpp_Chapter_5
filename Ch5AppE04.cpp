//Ch5ConE04.cpp
//Displays a bonus based on a sales amount 
//entered by the user
//Created/revised by <your name> on <current date>

#include <iostream>

using namespace std;

int main()
{	
	//declare variables
	double sales = 0.0;
	double bonus = 0.0;
	double rate  = 0.0;

	//enter input
	cout << "Enter the sales: ";
	cin >> sales;

	//assign bonus
	if (sales <= 250)
	{
		bonus = 10;
	}
	else
	{
		cout << "Enter a bonus rate";
		cin >> rate;
		bonus = sales * rate;
	}

	//display output

	cout << "bonus: " << bonus << endl;

	return 0;
}	//end of main function