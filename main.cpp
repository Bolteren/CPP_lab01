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
	cout << "������� �������� ���������� �: ";
	cin >> charx;//���������� �������� � ������
	if(srstr(charx)==1)//�������� �������� �� ������ ������
	{
		cout << "|=======================================================================|" << endl;
		cout << "|������! ������� �� ���������� �������� x, ������� �� ���������� ������!|" << endl;
		cout << "|              ��������� ���������� ���������.                          |" << endl;
		cout << "|=======================================================================|" << endl;
		return 1;
	}
	else
	{
		x = stof(charx);//������� �� ������ � ����� � ��������� ������.
	}
	cout << "������� �������� ���������� y: ";
	cin >> chary;
	if(srstr(chary)==1)
	{
		cout << "|=======================================================================|" << endl;
		cout << "|������! ������� �� ���������� �������� y, ������� �� ���������� ������!|" << endl;
		cout << "|              ��������� ���������� ���������.                          |" << endl;
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
	
	cout << endl << "����� ����������� ����� \"cout\"" << endl;
	cout.setf(ios::scientific);
	cout << "���������� ������� ����� � ������� �������:\t" << s << endl;
	cout.unsetf(ios::scientific);
	cout.setf(ios::fixed);
	cout << "��������� ���������� � ������������� ������:\t" << s << endl;
	cout << endl << "��������� ���������� ����� ������� \"printf()\"" << endl;
	printf("���������� ������� ����� � ������� �����:\t%e\n", s);
	printf("���������� ������� ����� � ������� �����:\t%f\n", s);
	
	float psi = 0.0f, sn = 0.0f, cn = 0.0f;
	sn = pow((sin(x)), 3);
	cn = pow((cos(y)),2);
	psi = x*(sn + cn);
	
	_setmode(_fileno(stdout), _O_U16TEXT);
	wcout << endl << endl << "�������� " << L"\u03c8 " << "�����: " << psi << endl;;
	return 0;
}
