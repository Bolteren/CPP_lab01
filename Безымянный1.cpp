//#include "stdafx.h" 
#include <iostream> 
#include <math.h> 
#include <stdio.h> 

using namespace std;


int main()
{
	setlocale(LC_ALL, "Rus");

	int x, y, z;
	cout << "??????? ?????????? x - ";
	cin >> x;
	cout << "??????? ?????????? y - ";
	cin >> y;
	cout << "??????? ?????????? z - ";
	cin >> z;

	if (x != 0) {
		float e;
		e = abs((pow(x, (y / x))) - pow((y / x), (0.3333333)));
		cout << "\n????? ?? 1 ??????:" << endl;
		cout << "Y = " << e << endl;
		printf("Y = %e\n", e);
	}
	if (y != pow(x, 2) - 1) {
		float f;
		f = ((y - x)*(y - z)) / ((y - x)*(1 + y - pow(x, 2)));
		cout << "\n????? ?? 2 ??????:" << endl;
		cout << "? = " << f << endl;
		printf("? = %e\n", f);
	}
	system("pause");
}
