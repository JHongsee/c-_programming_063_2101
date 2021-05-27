#include "What_to_eat.h"

int main()
{
	int sel;
	string menu[8] = { "중식","일식","고기","양식","한식","치킨","분식/야식","기타" };
	srand((unsigned int)time(NULL)); //시드값 설정해주기.

	cout << "오늘 뭐 먹지..." << endl;
	cout << "1.중식 2.일식 3.고기 4.양식 5.한식 6.치킨 7.디저트 8.기타" << endl;
	cin >> sel;
	cout << menu[sel - 1] << "이(가) 땡긴다!" << endl;

	Select(sel);
    return 0;
}