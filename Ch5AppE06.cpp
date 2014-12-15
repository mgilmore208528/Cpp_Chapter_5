//Ch5ConE06.cpp
//Displays message based on a letter 
//entered by the user
//Created/revised by <your name> on <current date>

#include <iostream>

using namespace std;

int main()
{	
	//declare variable
	char animal = ' ';

	//enter input
	cout << "Enter \"D\" for Dog" << endl;
	cin >> animal;
	
	//display output
	if (animal == 'D' || toupper(animal) == 'D')
	{
		cout << "Dog" << endl;
	}
	else
	{
		cout << "Cat" << endl;
	}
	return 0;
}	//end of main function