// Lab_04_4.cpp
// <Василик Юлія>
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком
// Варіант 2


#include <iostream>
#include <cmath>
#include <iomanip>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double x, y, xp, dx, xk, R;

	cout << "R ="; cin >> R;
	cout << "xp ="; cin >> xp;
	cout << "xk ="; cin >> xk;
	cout << "dx ="; cin >> dx;

	cout << fixed;
	cout << "______________________________" << endl;
	cout << "| таблиця значення функції,   |" << endl;
	cout << "| заданої графічно,           |" << endl;
	cout << "| на проміжку Xp до Xk        |" << endl;
	cout << "______________________________" << endl;
	cout << "|" << setw(7) << "x" << "       |" << setw(7) << "y" << "       |" << endl;
	cout << "______________________________" << endl;

	x = xp;

	while (x <= xk)
	{

		if (x <= -8)
			y = -R;
		else
			if (-8 < x && x <= -R)
				y = -R + ((R / (-R + 8)) * (x + 8));
			else
				if (-R < x && x <= R)
					y = -sqrt((R * R) - (x * x));
				else
					if (R < x && x <= 5)
						y = (2. / (5 - R)) * (x - R);
					else
						y = 3;


		cout << "|" << setw(9) << setprecision(1) << x
			<< "     |" << setw(9) << setprecision(4) << y
			<< "     |" << endl;
		x += dx;

	}
	cout << "______________________________" << endl;

	return 0;
}


