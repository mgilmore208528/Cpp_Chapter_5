//Ch5ConE07.cpp
//Displays a message based on the number 
//entered by the user
//Created/revised by <your name> on <current date>
//if (std::find(std::begin(my_list), std::end(my_list), my_var) != std::end(my_list))

#include <iostream>

using namespace std;

int main()
{	
	//declare variable
	int entry = 0;
	//enter input
	cout << "Enter a number: ";
	cin >> entry;
	
	
	//display output
	if (entry == 1 || entry == 2 || entry == 3)
	{
		cout << "Valid entry";
	}
	else
	{
		cout << "Entry error";
	}

	return 0;
}	//end of main function