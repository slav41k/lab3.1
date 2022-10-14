#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу
	cout << "x = "; cin >> x;
	 
	A = 2 + 1. / abs(1 + x);

	// спосіб 1: розгалуження в скороченій формі
	if (x < 1)
		B = sqrt (abs(cos	(x) + 13));
	if (1 <= x && x <= 5)
		B = 3 + 1 / tan ((4 + x) / sqrt(2));
	if (x > 5)
		B = 8 + 0,7 * x;
	y = A - B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// спосіб 2: розгалуження в повній формі
	if (x < 1)
		B = sqrt(abs(cos(x) + 13));
	else
		if (x > 5)
			B = 8 + 0, 7 * x;
		else
			B = 3 + 1 / tan((4 + x) / sqrt(2));
	y = A - B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}