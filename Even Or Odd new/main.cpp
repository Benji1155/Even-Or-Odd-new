#include <iostream> 

using namespace std;

int main()

{
	//declaring variables
	int n1 = 0;

	//asking for 2 numbers
	cout << "Enter a whole number: ";
	cin >> n1;

	//doing maths
	if (n1 % 2 == 0)
		cout << n1 << " is even.";
	else
		cout << n1 << " is odd.";
return(0);

}