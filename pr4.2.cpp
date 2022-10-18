#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, A, B, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(6) << "x" << setw(6) << "|"
		<< setw(6) << "y" << setw(6) << "|" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		A = 4.95 * x * x;
		if (x < -3.5)
			B = 4 + pow(x, -2);
		else
			if (x < 1 && x >= -3.5)
				B = tan((3.5 + x) / 5);
			else
				B = sin(3 * x) - cos(x);
		y = A + B;
		cout << "|" << setw(6) << setprecision(2) << x
			<< setw(6) << "|" << setw(6) << setprecision(3)
			<< y << setw(6) << "|" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}