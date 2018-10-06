#include <iostream>
using namespace std;

double add(double x, double y);

double add(double a, double b, double c);

bool test(bool x);

bool test(double x);

void test();

int main()
{
	auto a = add(3, 4);
	cout << "3 + 4 to: \n" << a;

	double b = add(1.2, 3.4);
	cout << "1.2 + 3.4 to: \n" << b;

	auto c = add(1.1, 2.2, 3.3);
	cout << "1.1, 2.2, 3.3 to: \n" << c;

	if (test(true)) {

		cout << "true passes the test\n";
	}
	if (test(3.2)) {

		cout << "3.2 passes the test\n";
	}

	return 0;
}
