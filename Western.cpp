#include "What_to_eat.h"

void Western::ShowInfo() 
{
	int i = rand() % 8;
	cout << food[i] << "��(��) ���?" << endl << endl;
	cout << "*****��õ�Ĵ�*****" << endl;

	for (int j = 0; j < 3; j++)
		cout << restaurant[i][j] << ' ' << Phone[i][j] << ' ' << Address[i][j] << endl;
}