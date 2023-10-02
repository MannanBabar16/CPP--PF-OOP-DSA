// Given length in inches, this program outputs the equivalent
// length in feet and remaining inch(es).

#include<iostream>
using namespace std;

int main()
{
	int inches;

	inches = 100;

	cout << inches << " inches = ";

	cout << 100 / 12 << " feet and " << 100 % 12 << " inches " << endl;

	return 0;
}