#include "What_to_eat.h"

void Western::ShowInfo() 
{
	int i = rand() % 8;
	cout << food[i] << "은(는) 어때요?" << endl << endl;
	cout << "*****추천식당*****" << endl;

	for (int j = 0; j < 3; j++)
		cout << restaurant[i][j] << ' ' << Phone[i][j] << ' ' << Address[i][j] << endl;
}