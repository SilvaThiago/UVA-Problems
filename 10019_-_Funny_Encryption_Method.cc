#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
   int n, m, aux, decimal, b1, b2;
   double counter;

   cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> m;
		aux = m;
		b1 = 0;
		b2 = 0;

		while (aux != 0)
		{
			if (aux % 2 == 1)
				b1++;
			aux /= 2;
		}

		decimal = 0;
		counter = 0;
		aux = m;

		while (aux != 0)
		{
         decimal += (aux % 10) * pow (16.0, counter);
         aux /= 10;
         counter++;
		}

		while (decimal != 0)
		{
			if (decimal % 2 == 1)
				b2++;
			decimal /= 2;
		}


		cout << b1 << " " << b2 << endl;
	}
}
