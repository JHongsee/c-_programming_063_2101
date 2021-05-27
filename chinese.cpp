#include <iostream>
using namespace std;

class Jajang
{
private:
	const char* rest[3] = { "식당1","식당2","식당3" };
	const char* num[3] = { "num1","num2","num3" };
public:
	void ShowMenuInfo(void)
	{
		cout << "식당: " << rest[0] << " 전화번호: " << num[0] << endl;
		cout << "식당: " << rest[1] << " 전화번호: " << num[1] << endl;
		cout << "식당: " << rest[2] << " 전화번호: " << num[2] << endl;
	}
};

class SSFR
{
private:
	const char* rest[3] = { "식당4","식당5","식당6" };
	const char* num[3] = { "num4","num5","num6" };
public:
	void ShowMenuInfo(void)
	{
		cout << "식당: " << rest[0] << " 전화번호: " << num[0] << endl;
		cout << "식당: " << rest[1] << " 전화번호: " << num[1] << endl;
		cout << "식당: " << rest[2] << " 전화번호: " << num[2] << endl;
	}
};

class Chinese
{
private:
	const char* menulist[4] = { "짜장","짬뽕","삼선볶음밥","새우볶음밥" };
public:
	void ShowMenu(int i)
	{
		cout << menulist[i] << "이 먹고싶어요!" << endl;
	}
};

int main(void)
{
	int select;
	int random = 2; //랜덤으로 2가 나왔다 가정
	cout << "뭐 먹을래? 1.중식 2.일식" << endl;
	cin >> select; //중식을 골랐다 가정

	if (select == 1)
	{
		Chinese food;


		return 0;
	}
