/*===================================================================================================================
������������ ������ �1
����� 2
������� 3
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
}//������ ����� � 12

int main ()
{
	setlocale(LC_ALL, "Russian");
	double x, y;
/*	cout << "������� ����� � ";
	cin >> x;
	
	y = 1 + x + pow(x, 2)/factorial(2) + pow(x, 3)/factorial(3) + pow(x, 4)/factorial(4);
	cout << endl << "����� ����� ����������� \"cout\"" << endl;
	cout.setf(ios::scientific);
	cout << "���������� ������� ����� � ������� �������:\t" << y << endl;
	cout.unsetf(ios::scientific);
	cout.setf(ios::fixed);
	cout << "��������� ���������� � ������������� ������:\t" << y << endl;
	cout << endl << "��������� ���������� ����� ������� \"printf()\"" << endl;
	printf("���������� ������� ����� � ������� �����:\t%e\n", y);
	printf("���������� ������� ����� � ������� �����:\t%f\n", y);
*/	
	cout << "������� x � y (����� ������ ��� Enter) ";
	cin >> x >> y;
//	cout << "X = " << x << " Y = " << y;
	y = x*(sin(pow(x,3)) + pow(cos(y),2));
	
	cout << endl << "����� ����� ����������� \"cout\"" << endl;
	cout.setf(ios::scientific);
	cout << "���������� ������� ����� � ������� �������:\t" << y << endl;
	cout.unsetf(ios::scientific);
	cout.setf(ios::fixed);
	cout << "��������� ���������� � ������������� ������:\t" << y << endl;
	cout << endl << "��������� ���������� ����� ������� \"printf()\"" << endl;
	printf("���������� ������� ����� � ������� �����:\t%e\n", y);
	printf("���������� ������� ����� � ������� �����:\t%f\n", y);
	
	return 0;
}
