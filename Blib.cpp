#include <iostream>
#include <string>
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

int srstr(string mas1)
{
	int rezult = 0;
	for (int caunter; caunter < mas1.size(); caunter++)
	{
		if (!((mas1[caunter] > 47 && mas1[caunter] < 58) || mas1[caunter] == 46 || mas1[caunter] == 44 || mas1[0] == 45)) return 1;
	}
	return 0;
}

float stof(string str1)
{
	int caunter = 0, nocaunter = 0, ct1, znak = 0, sz1 = 0;
	if(str1[0] == 45)
	{
		
		znak = 1;
		caunter = 1;
		sz1 = 0;
	}
	else 
	{
		sz1 = -1;
		znak =0;
		caunter = 0;
	}
	float temp = 0.0f, tmp1 = 0.0f;
	for (caunter; caunter < str1.size(); caunter++)
	{
		if(str1[caunter] == 46 || str1[caunter] == 44)
		{
			break;
		}
	}
	if(caunter < str1.size())
	{
		for(int cntr = caunter+1; cntr < str1.size(); cntr++)
		nocaunter++;
	}
	int cntr = 0;
	ct1 = caunter;
	for(caunter--; caunter > sz1; caunter--)
	{
		temp = temp + (str1[caunter] - 48)*pow(10, cntr);
		cntr++;
	}
	cntr = 1;
	for(ct1++; ct1 < str1.size();ct1++)
	{
		float a1 = 0.0f, a2 = 0.0f;
		a1 = (1/pow(10,cntr));
		a2 = str1[ct1] - 48;
		cntr++;
		tmp1 = tmp1 + (a2*a1);
	}
	temp = temp + tmp1;	
	if(znak == 1) temp = temp*(-1);
	return temp;
}

