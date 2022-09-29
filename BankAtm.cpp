// BankAtm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int pin ;
	int choice;  
	int balance = 1000 ;	// default balance for initial account.
	int withdraw;			// the value user need from his balance.
	int deposite;			// the value user need to add to the account.
	bool correct = true;	// to check user need to quit or not.
	
	cout << "\n****************Welcome to use our School-Tech Atm********************\n";

	cout << "Enter your pin : ";
	cin >> pin;

	// choose default pin which user should enter
	while (pin != 1234)
	{
		cout << "please enter the correct pin : ";
		cin >> pin;
	}
	

	// show our Atm services :  
	do {
		cout << "------------------------------\n";
		cout << "1. Check account " << endl;
		cout << "2. Withdraw account " << endl;
		cout << "3. Deposite cash " << endl;
		cout << "4. Quit " << endl;
		cout << "-------------------------------\n";
		cout << " choose from the menu : " ;
		cin >> choice;
		switch (choice)
		{
			case 1:
				cout << "Your carrent balance is : $" << balance << endl;
				break;
			case 2:
				cout << "Enter the amount to withdraw : ";
				cin >> withdraw;
				
				//check balance we have is enough for withdraw or not.	
				if (withdraw > balance)
					cout << "you don't have enough money........... " << endl;
				else 
				{
					balance -= withdraw;
					cout << "your current balance is : $" << balance << endl;
				}
				break;
			
			case 3: 
				cout << "Enter the amount : ";
				cin >> deposite;
				
				balance += deposite;

				cout << "Your carrent balance is " << balance <<endl;
				break;

			case 4 : 
				cout << "\n************* Thank You for using School-Tech Atm ****************** \n";
				correct = false;
				break;

			default:
				cout << "The number is not exist .............. ";
				break;
		}

	} while (correct);
}
