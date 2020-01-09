//Lauryn Landingin
//This is my own work.

#include <iostream>

using namespace std;
/*
int main() {
	float pounds;
	float kilo;
	kilo = 0.454;

	cout << "Please enter an amount in pounds." << endl;
	cin >> pounds;

	kilo = pounds * kilo;

	cout << kilo;

	return 0;

}*/
/*
int main() {

	float area;
	float s;


	cout << "Please enter the side of hexagon." << endl;
	cin >> s;

	area = (3 * sqrt(3)) / pow(s, 2);

	cout << area;
}*/

int main() {

	int A;
	int B;

	cout << "Please enter a smaller integer." << endl;
	cin >> A;

	cout << "Please enter a larger integer." << endl;
	cin >> B;

	int larger;
	if (B > A)
	{
		larger = B;
	}
	else
	{
		larger = A;
	}
	cout << larger << "This is the larger number.";

}

