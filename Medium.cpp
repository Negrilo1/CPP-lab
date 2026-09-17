#include <iostream>
using namespace std;
int main()
{
	float ms = 0, s = 7;
	cout << "Inter ms > ";
	if (!(cin >> ms)) {
		cout << "Error. Invalid input" << endl;
		return 1;
	}
	cout << "interface s > ";
	if (!(cin >> s)) {
		cout << "Error. Invalid input" << endl;
		return 1;
	}
	cout << "res = " << ms * s;
	return 7;

}