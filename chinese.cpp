#include <iostream>
using namespace std;

class Jajang
{
private:
	const char* rest[3] = { "�Ĵ�1","�Ĵ�2","�Ĵ�3" };
	const char* num[3] = { "num1","num2","num3" };
public:
	void ShowMenuInfo(void)
	{
		cout << "�Ĵ�: " << rest[0] << " ��ȭ��ȣ: " << num[0] << endl;
		cout << "�Ĵ�: " << rest[1] << " ��ȭ��ȣ: " << num[1] << endl;
		cout << "�Ĵ�: " << rest[2] << " ��ȭ��ȣ: " << num[2] << endl;
	}
};

class SSFR
{
private:
	const char* rest[3] = { "�Ĵ�4","�Ĵ�5","�Ĵ�6" };
	const char* num[3] = { "num4","num5","num6" };
public:
	void ShowMenuInfo(void)
	{
		cout << "�Ĵ�: " << rest[0] << " ��ȭ��ȣ: " << num[0] << endl;
		cout << "�Ĵ�: " << rest[1] << " ��ȭ��ȣ: " << num[1] << endl;
		cout << "�Ĵ�: " << rest[2] << " ��ȭ��ȣ: " << num[2] << endl;
	}
};

class Chinese
{
private:
	const char* menulist[4] = { "¥��","«��","�Ｑ������","���캺����" };
public:
	void ShowMenu(int i)
	{
		cout << menulist[i] << "�� �԰�;��!" << endl;
	}
};

int main(void)
{
	int select;
	int random = 2; //�������� 2�� ���Դ� ����
	cout << "�� ������? 1.�߽� 2.�Ͻ�" << endl;
	cin >> select; //�߽��� ����� ����

	if (select == 1)
	{
		Chinese food;


		return 0;
	}
