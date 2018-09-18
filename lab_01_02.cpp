/*===================================================================================================================
Лабораторная работа №1
Часть 2
Вариант 3
=====================================================================================================================*/
#include <iostream>

#include <cmath>

using namespace std;

unsigned long int factorial(int n)
{
	if(n == 1 || n == 0)
	{
		return 1;
	}
	else n = n * factorial(n-1);
}//предел числа н 12

int main ()
{
	setlocale(LC_ALL, "Russian");
	double x, y;
/*	cout << "Введите число х ";
	cin >> x;
	
	y = 1 + x + pow(x, 2)/factorial(2) + pow(x, 3)/factorial(3) + pow(x, 4)/factorial(4);
	cout << endl << "Вывод через результатов \"cout\"" << endl;
	cout.setf(ios::scientific);
	cout << "Вычисление функции равно в научном формате:\t" << y << endl;
	cout.unsetf(ios::scientific);
	cout.setf(ios::fixed);
	cout << "Результат вычислений с фиксированной точкой:\t" << y << endl;
	cout << endl << "Выведение результата через функцию \"printf()\"" << endl;
	printf("Вычисление функции равно в научной форве:\t%e\n", y);
	printf("Вычисление функции равно в научной форве:\t%f\n", y);
*/	
	cout << "Введите x и y (через пробел или Enter) ";
	cin >> x >> y;
//	cout << "X = " << x << " Y = " << y;
	y = x*(sin(pow(x,3)) + pow(cos(y),2));
	
	cout << endl << "Вывод через результатов \"cout\"" << endl;
	cout.setf(ios::scientific);
	cout << "Вычисление функции равно в научном формате:\t" << y << endl;
	cout.unsetf(ios::scientific);
	cout.setf(ios::fixed);
	cout << "Результат вычислений с фиксированной точкой:\t" << y << endl;
	cout << endl << "Выведение результата через функцию \"printf()\"" << endl;
	printf("Вычисление функции равно в научной форве:\t%e\n", y);
	printf("Вычисление функции равно в научной форве:\t%f\n", y);
	
	return 0;
}
