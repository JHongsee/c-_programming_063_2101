#include "What_to_eat.h"

int main()
{
	int sel;
	string menu[8] = { "�߽�","�Ͻ�","���","���","�ѽ�","ġŲ","�н�/�߽�","��Ÿ" };
	srand((unsigned int)time(NULL)); //�õ尪 �������ֱ�.

	cout << "���� �� ����..." << endl;
	cout << "1.�߽� 2.�Ͻ� 3.��� 4.��� 5.�ѽ� 6.ġŲ 7.����Ʈ 8.��Ÿ" << endl;
	cin >> sel;
	cout << menu[sel - 1] << "��(��) �����!" << endl;

	Select(sel);
    return 0;
}