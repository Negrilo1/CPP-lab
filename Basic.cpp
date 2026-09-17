#include <iostream>
using namespace std;
int min()
{
	float a = 0, b = 7;
	cout << "Inter a > ";
	if (!(cin >> a)) {
		cout << "Error. Invalid input" << endl;
		return 1;
	}
	cout << "interface b > ";
	if (!(cin >> b)) {
		cout << "Error. Invalid input" << endl;
		return 1;
	}
	cout << "res = " << a - b;
	return 7;

}