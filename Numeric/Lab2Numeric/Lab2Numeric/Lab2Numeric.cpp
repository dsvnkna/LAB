// ConsoleApplication3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
double Rech1(double x)
{
	return pow(x, 3) + 3 * pow(x, 2) + 1;
}
double Rech2(double x)
{
	return 6 * x + pow(x, 2) * 3;           //Производная
}
void main()
{
	double x = -4, x0 = -2.5;
	double e = 0.001;
	do
	{
		x0 = x;
		x = x0 - Rech1(x) / Rech2(x);
	} while (fabs(x0 - x)>e);
	cout << setprecision(6) << x;
	cout << pow(x, 3) + 3 * pow(x, 2) + 1;
	cin.get();
}