#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a;
	double b;
	double c;
	double x1;
	double x2;

	cout << "Please enter a: " << endl;
	cin >> a;

	if (a == 0)
	{
		cout << "Sorry, a cannot be a 0: " << endl;
		exit(0);
	}
	else
	{
		cout << "Please enter b: " << endl;
		cin >> b;

		cout << "Please enter c: " << endl;
		cin >> c;

		double discr = ((pow(b, 2)) - (4 * a * c));

		if (discr >= 0)
		{
			x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
			x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

			cout << "X1: " << x1 << endl;
			cout << "X2: " << x2 << endl;
		}
		else
		{
			double real = (-b / (2 * a)); 
			double imag = (sqrt(-discr) / (2 * a));

			cout << "X1: " << real << " " << '+' << " " << imag << 'i' << endl;
			cout << "X2: " << real << " " << '-' << " " << imag << 'i' << endl;
		}
	}

	//system("pause");
	return 0;
}