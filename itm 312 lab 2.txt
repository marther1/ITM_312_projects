#include <iostream>
#include <ctime>
using namespace std;

void function1(int[], int[]);

int main() {
	srand(time(NULL));
	const int SIZE = 5;
	int lottery[5];
	int users[5];
	int count;
	int matches;

	for (auto &val : users)
	{
		cout << "please enter integers between 0 and 9: ";
		cin >> val;
	}
	cout << "here are the values you entered:\n";
	for (auto val : users)
		cout << "| "<< val << " | ";
	cout << endl;
	cout << "here are 5 random numbers from 0-9: " << endl;
	for (count = 0; count < SIZE; count++) 
	{
		lottery[count] = rand() % 10;
		cout << "| " << lottery[count] << " | ";
	}
	cout << endl;
	function1(lottery, users);
	system("pause");
	return 0;
}
void function1(int lottery[], int users[])
{
	int matches = 0;
	for (int x = 0; x < 5; ++x)
	
	if (lottery[x] == users[x])
	matches = matches + 1;
	cout << "You have " << matches << " matches between lottery and users input." << endl;
}