#include "What_to_eat.h"

void Western::ShowInfo() 
{
	int i = rand() % 8;
	cout << food[i] << "Àº(´Â) ¾î¶§¿ä?" << endl << endl;
	cout << "*****ÃßÃµ½Ä´ç*****" << endl;

	for (int j = 0; j < 3; j++)
		cout << restaurant[i][j] << ' ' << Phone[i][j] << ' ' << Address[i][j] << endl;
}
