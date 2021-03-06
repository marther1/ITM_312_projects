/*														Mohmedamir Arther
															ITM 312
															Project 4
															11/15/17
*/
#include <iostream>
#include <iomanip>
#include "Header.h"
#include <string>
using namespace std;

//main function
int main() {
	//initalize local variables
	int input;
	ATM get;
	int amount = 10000;
	int balance = 0;
	string username;
	int pass;

	cout << "TO SIGN IN TO YOUR ACCOUNT\n";
	//ask the user for the username.
	cout << "Please enter your username: ";
	cin >> username;
	//ask the user for the 4-digit pin.
	cout << "\nNow enter your 4-digit pin: ";
	cin >> pass;
	//when 1234 or 7860 is entered for the password output their username and give them options to choose what to do next. 
	//else output an error and tell the user to try again.
	if (pass == 1234 || pass == 7860) 
	{
		cout << "Hello " << username << endl;
		//loop the user with these options until the user inputs 4 for exit.
		do {
			cout << "\nPRESS 1 to show the initial balance\n";
			cout << "PRESS 2 to deposit to your savings account\n";
			cout << "PRESS 3 to withdraw from your savings account\n";
			cout << "PRESS 4 for Exit\n";
			//ask user for input
			cin >> input;
			//use switch statements to switch between functions
			switch (input)
			{
			case 1:
				ATM::InitialBalance(amount);
				break;
			case 2:
				ATM::Deposit(amount, balance);
				break;
			case 3:
				ATM::Withdraw(amount, balance);
				break;
			case 4:
				system("exit");
				cout << "PRESS ENTER TO EXIT\n";
			default:
				break;
			}
		} 
		while (input != 4);
	}
	else{
		cout << "\nERROR! Please try again!" << endl;
		system("exit");
	}
	
	system("pause");
	return 0;
}
//initial balance function in ATM class
void ATM::InitialBalance(int amount)
{
	//initialize the local variable
	double interest;
	//output the initial balance on the account
	cout << "Your account has $" << amount << " in your account" << endl;
	//calculate the interest on the initial balance
	interest = amount * 0.01;
	//output the interest on the initial balance
	cout << "Your interset on your initial balance is: $" << interest << endl;
}
void ATM::Deposit(int amount, int newbalance)
{
	//initialize the local variable
	int add;
	//ask the user how much deposit do they want to add to their account
	cout << "Please enter the amount you would you like to deposit into your account: ";
	cin >> add;
	//calculate the newbalance after the deposit
	newbalance = amount + add;
	//output the newbalance on the account
	cout << "your new balance in your account is: $" << newbalance << endl;
}
//withdraw function in the ATM class
void ATM::Withdraw(int amount, int newbalance)
{
	//initialize the local variable
	int subtract;
	//ask the user how much withdrawal they would like to take out from their account
	cout << "please enter the amount you would like to withdraw from your account: ";
	cin >> subtract;
	//warn the user if the withdrawal amount is higher than initial balance or if the withdrawal amount is negative
	if (subtract > amount) {
		cout << "Insufficient funds\n";
	}
	else if (subtract < 0) {
		cout << "Negative entries are not allowed\n";
	}
	else {
		newbalance = amount - subtract;
		cout << "your new balance in your account is: $" << newbalance << endl;
	}
}
