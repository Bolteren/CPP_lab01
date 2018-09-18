#include "Blib.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	setlocale(LC_ALL,"Russian");
	string a;
	cin >> a;
	if(srstr(a)==1)
	{
		cout << "ќшибка! ¬ведено не корректное значение, не €вл€ющеес€ числом!" << endl;
		return 1;
	}
	
	return 0;
}
