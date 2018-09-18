#include "Blib.h"
#include <fcntl.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(void) 
{
	setlocale(LC_ALL,"Russian");
	string charx, chary;
	float x = 0.0f, y = 0.0f;
	double s = 0.0f;
	cout << "Введите значение переменной х: ";
	cin >> charx;//Считывание значения в строку
	if(srstr(charx)==1)//Проверка является ли строка числом
	{
		cout << "|=======================================================================|" << endl;
		cout << "|Ошибка! Введено не корректное значение x, которое не являющееся числом!|" << endl;
		cout << "|              Аварийное завершение программы.                          |" << endl;
		cout << "|=======================================================================|" << endl;
		return 1;
	}
	else
	{
		x = stof(charx);//Перевод из строки в число с плавающей точкой.
	}
	cout << "Введите значение переменной y: ";
	cin >> chary;
	if(srstr(chary)==1)
	{
		cout << "|=======================================================================|" << endl;
		cout << "|Ошибка! Введено не корректное значение y, которое не являющееся числом!|" << endl;
		cout << "|              Аварийное завершение программы.                          |" << endl;
		cout << "|=======================================================================|" << endl;
		return 1;
	}
	else
	{
		y = stof(chary);
	}
	float x1 = 0.0f, x2 = 0.0f, x3 = 0.0f;
	x1 = pow(x, 2)/factorial(2);
	x2 = pow(x, 3)/factorial(3);
	x3 = pow(x, 4)/factorial(4);
	s = 1.0f + x + x1 + x2 + x3;
	
	cout << endl << "Вывод результатов через \"cout\"" << endl;
	cout.setf(ios::scientific);
	cout << "Вычисление функции равно в научном формате:\t" << s << endl;
	cout.unsetf(ios::scientific);
	cout.setf(ios::fixed);
	cout << "Результат вычислений с фиксированной точкой:\t" << s << endl;
	cout << endl << "Выведение результата через функцию \"printf()\"" << endl;
	printf("Вычисление функции равно в научной форве:\t%e\n", s);
	printf("Вычисление функции равно в научной форве:\t%f\n", s);
	
	float psi = 0.0f, sn = 0.0f, cn = 0.0f;
	sn = pow((sin(x)), 3);
	cn = pow((cos(y)),2);
	psi = x*(sn + cn);
	
	_setmode(_fileno(stdout), _O_U16TEXT);
	wcout << endl << endl << "Значение " << L"\u03c8 " << "равно: " << psi << endl;;
	return 0;
}
