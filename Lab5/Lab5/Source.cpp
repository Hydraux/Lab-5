/*
Author: Ryan Bezold
Section: 402
Assignment: Lab 5
*/

#include <IOStream>;
#include <String>;
#include <iomanip>;

using namespace std;

int getSum(int start, int stop)
{
	int sum = 0;
	for (int i = start; i <= stop; i++)
	{
		sum += i;
	}
	return sum;
}

void dispBox(int boxSize)
{
	for (int i = 0; i < boxSize; i++)
	{
		for (int j = 0; j < boxSize; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}

int main()
{

	char choice;
	int start, stop, sum, boxSize;

	do 
	{
		//display menu
		cout << "S - Sum Between" << endl;
		cout << "B - Print Box" << endl;
		cout << "X - Exit" << endl;
		cout << "Enter option: ";

		//get choice from user.
		cin >> choice;
		if (choice == 'S' || choice == 'B' || choice == 'X' || choice == 's' || choice == 'b' || choice == 'x')
		{
			switch (choice)
			{
			//possible choice for input x
			case 'X':
				cout << "Thanks for playing!" << endl;
				system("pause");
				return 0;
			case 'x':
				cout << "Thanks for playing!" << endl;
				system("Pause");
				return 0;

			//possible choice for input s
			case 'S':
				cout << "Enter start and stop numbers ";
				cin >> start;
				cin >> stop;
				sum = getSum(start, stop);
				cout << "Sum of the numbers between those is: " << sum << endl;
				break;
			case 's':
				cout << "Enter start and stop numbers ";
				cin >> start;
				cin >> stop;
				sum = getSum(start, stop);
				cout << "Sum of the numbers between those is: " << sum << endl;
				break;

			//possible choice for input b
			case 'B':
				cout << "Enter box size: ";
				cin >> boxSize;
				dispBox(boxSize);
				break;
			case 'b' :
				cout << "Enter box size: ";
				cin >> boxSize;
				dispBox(boxSize);
				break;
			}
		}
		//if the user enters an invalid input
		else
		{
			cout << "Invalid option, try again!" << endl;
		}

	//infinitly loop
	} while (1);

	

	


}