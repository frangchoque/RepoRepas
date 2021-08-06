#include <iostream>


int main()
{
	int moneda = 10;
	int* Monedas = new int[5];
	int i;
	for (i = 0; i < 3; i++)
	{

		if (moneda == 10)
			moneda = 25;
		if (moneda == 25)
			moneda = 25;
		if (moneda == 50)
			moneda = 1;
		else
			moneda++;
	}

	delete Monedas;
}