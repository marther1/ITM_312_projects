/*																Mohmedamir Arther
																	ITM 312
																	LAB 6
																	11/27/17
*/
#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

int main()
{
		string input;
		int x;
		char y;
	
		CustomerData data;
		
		cout << "Please enter the customer's first name: ";
	
		cin >> input;
	
		data.setFirstName(input);
	
		cout << "Please enter the customer's last name: ";
			cin >> input;
	
		data.setLastName(input);
	

	
		cin.ignore(100, '\n');
	
		cin.clear();
	
		cout << "Please enter the customer's address: ";
	
		getline(cin, input);
	
		data.setAddress(input);
	
		cout << "Please enter the customer's city: ";
	
		getline(cin, input);
			data.setCity(input);
		
		cout << "Please enter the customer's state: ";
	
		getline(cin, input);
	
		data.setState(input);
	

	
		cout << "Please enter the customer's zip: ";
	
		cin >> input;
	
		data.setZip(input);
	
			cout << "Please enter the customer's phone number: ";
	
		cin >> input;
	
		data.setPhone(input);
	
		cout << "Please enter the customer's unique id: ";
	
		cin >> x;
			data.setCustomerNumber(x);
	
		
		cout << "Does the customer want to be on the mailing list? Enter y or n: ";
		cin >> y;

		if (y == 'y' || y == 'Y')
			data.setMailingList(true);
		else
		
			data.setMailingList(false);


		
		cout << "Customer's information: " << endl;
	
		cout << data << endl;

		system("pause");
		return 0;
}

void PersonData::setLastName(string l)

{
		lastName = l;
}


string PersonData::getLastName()
{

		return lastName;

}

void PersonData::setFirstName(string f)

{
		firstName = f;

}

string PersonData::getFirstName()

{

		return firstName;

}



void PersonData::setAddress(string a)

{

		address = a;

}


string PersonData::getAddress()

{

		return address;

}



void PersonData::setCity(string c)

{

		city = c;
}

string PersonData::getCity()
{

		return city;

}

void PersonData::setState(string s)

{

		state = s;

}

string PersonData::getState()

{

		return state;

}

void PersonData::setZip(string z)

{

		zip = z;

}

string PersonData::getZip()

{
		return zip;

}

void PersonData::setPhone(string p)

{

		phone = p;

}

string PersonData::getPhone()

{
	
		return phone;
	
}

void CustomerData::setCustomerNumber(int c)
{
		customerNumber = c;
}


int CustomerData::getCustomerNumber()

{

		return customerNumber;
}

void CustomerData::setMailingList(bool m)
{
		mailingList = m;
}

bool CustomerData::getMailingList()

{
			return mailingList;
	
}