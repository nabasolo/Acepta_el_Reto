#include <iostream> // std::cout
#include <algorithm>
#include <stdlib.h>
using namespace std;

bool myfunctionMayor(int i, int j) { return (i > j); }

string mayor(string &numero)
{
	sort(numero.begin(), numero.end(), myfunctionMayor);
	return numero;
}

string menor(string &numero)
{
	sort(numero.begin(), numero.end());
	return numero;
}

int resolver(string numero, int cant)
{

	if (numero == "6174")
		return cant;

	int resta, Imayor, Imenor;
	string Nmayor, Nmenor;

	Nmayor = mayor(numero);
	Nmenor = menor(numero);

	Imayor = stoi(Nmayor);
	Imenor = stoi(Nmenor);
	resta = Imayor - Imenor;
	if (resta == 0)
		return 8;
	while (resta < 1000)
	{
		resta = resta * 10;
	}

	return (resolver(to_string(resta), cant + 1));
}

int main()
{
	int casos, i, numero;
	cin >> casos;

	for (i = 0; i < casos; ++i)
	{
		cin >> numero;
		while (0 < numero and numero < 1000)
		{
			numero = numero * 10;
		}
		cout << resolver(to_string(numero), 0) << "\n";
	}

	return 0;
}
