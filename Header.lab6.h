#include <iostream>
#include <string>
using namespace std;

class PersonData
{
	
protected:
	
		string lastName;
	
		string firstName;
	
		string address;
	
		string city;
	
		string state;
	
		string zip;
	
		string phone;
	

	
public:
	
		void setLastName(string l);
	
		string getLastName();
	
		void setFirstName(string f);
	
		string getFirstName();
	
	void setAddress(string a);
	
		string getAddress();
	
		void setCity(string c);
	
		string getCity();
	
		void setState(string s);
	
		string getState();
	
		void setZip(string z);
	
		string getZip();
	
		void setPhone(string p);
	
		string getPhone();
	
};

class CustomerData : public PersonData
	
{
	
private:
	
		int customerNumber;
	
		bool mailingList;
	

	
public:
	
		void setCustomerNumber(int c);
	
		int getCustomerNumber();
	
		void setMailingList(bool m);
	
		bool getMailingList();
		
		friend ostream& operator<<(ostream & out, const CustomerData & c)
		
	{
		
			out << "Name: " << c.firstName << " " << c.lastName << endl;
				out << "Address: " << c.address << endl;
		
			out << "City, State: " << c.city << ", " << c.state
			
			<< "\nZip code: " << c.zip << endl;
		
			out << "Phone: " << c.phone << endl;
		
			out << "Customer Number: " << c.customerNumber << endl;
		
			if (c.mailingList == true)

				out << "Mailing List: Yes" << endl;

			else

				out << "Mailing List: No" << endl;


			return out;

	}
};