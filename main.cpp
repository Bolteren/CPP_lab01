#include "Blib.h"
//#include <fcntl.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(void) 
{
	setlocale(LC_ALL,"Russian");
	string charx, chary;
	float x = 0.0, y = 0.0;
	double s = 0.0;
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
	float x1 = 0.0, x2 = 0.0, x3 = 0.0;
	x1 = pow(x, 2.0)/factorial(2.0);
	x2 = pow(x, 3.0)/factorial(3.0);
	x3 = pow(x, 4.0)/factorial(4.0);
	s = 1.0 + x + x1 + x2 + x3;
	cout << endl << "�������� ������ �������:";
	cout << endl << "����� ����������� ����� \"cout\"" << endl;
	cout.setf(ios::scientific);
	cout << "���������� ������� ����� � ������� �������:\t" << s << endl;
	cout.unsetf(ios::scientific);
	cout.setf(ios::fixed);
	cout << "��������� ���������� � ������������� ������:\t" << s << endl;
	cout << endl << "��������� ���������� ����� ������� \"printf()\"" << endl;
	printf("���������� ������� ����� � ������� �����:\t%e\n", s);
	printf("���������� ������� ����� � ������� �����:\t%lf\n", s);
	
	double psi = 0.0, sn = 0.0, cn = 0.0;
	sn = pow((sin(x)), 3.0);
	cn = pow((cos(y)),2.0);
	psi = x*(sn + cn);
	
	cout << endl << endl << "����� �������� ������ �������:\n����� ����������� ����� \"cout\"" << endl;
	cout.unsetf(ios::fixed);
	cout.setf(ios::scientific);
	cout << "���������� ������� ����� � ������� �������:\t" << psi << endl;
	cout.unsetf(ios::scientific);
	cout.setf(ios::fixed);
	cout << "��������� ���������� � ������������� ������:\t" << psi << endl;
	cout << endl << "��������� ���������� ����� ������� \"printf()\"" << endl;
	printf("���������� ������� ����� � ������� �����:\t%e\n", psi);
	printf("���������� ������� ����� � ������� �����:\t%lf\n", psi);
	
/*	_setmode(_fileno(stdout), _O_U16TEXT);
	wcout << endl << endl << "�������� " << L"\u03c8 " << "�����: " << psi << endl;*/
	return 0;
}
