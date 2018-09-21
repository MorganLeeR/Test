#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
	int x;
	int y;
	cout << "Please enter a number (1-12)." << endl;
	cin >> x;
	
	while ( x < 1 || x > 12)
	{
		cout << "Invalid value; please re-enter (1-12)." << endl;
		cin >> x;
	}
	
	sleep(1);
	cout << "Your number is " << x << endl;
	cout << "Choose one more number (1-40)." << endl;
	cin >> y;
	
	while ( y < 1 || y > 40)
	{
		cout << "Invalid value; please re-enter (1-40)." << endl;
		cin >> y;	
	}
	
	sleep(1);
	cout << "You have picked " << x << " and " <<  y << endl;
}
