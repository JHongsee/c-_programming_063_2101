#include "What_to_eat.h"

int main()
{
    int sel;
    srand((unsigned int)time(NULL)); //�õ尪 �������ֱ�.
    string menu[8] = { "�߽�","�Ͻ�","���","���","�ѽ�","ġŲ","�н�/�߽�","��Ÿ" };
    cout << "���� �� ����..." << endl;
    for (int i = 0; i < 8; i++)
        cout << i + 1 << '.' << menu[i] << ' ';
    cout << endl;
    cin >> sel;
    cout << menu[sel - 1] << "��(��) �����!" << endl;

    Select(sel);
    /*
    Western west;
    Etc etc;

    switch (k) {
    case 1:
        cout << "�߽��� ���õƽ��ϴ�." << endl << endl;
        //chinese chin;
        //chin.ShowRandom();
        break;
    case 2:
        cout << "�Ͻ��� ���õƽ��ϴ�." << endl << endl;
        //japanese jap;
        break;
    case 3:
        cout << "��Ⱑ ���õƽ��ϴ�." << endl << endl;
        break;
    case 4:
        cout << "����� ���õƽ��ϴ�." << endl << endl;
        west.ShowInfo();
        break;
    case 5:
        cout << "�ѽ��� ���õƽ��ϴ�." << endl << endl;
        break;
    case 6:
        cout << "ġŲ�� ���õƽ��ϴ�." << endl << endl;
        break;
    case 7:
        cout << "�н�/�߽��� ���õƽ��ϴ�." << endl << endl;
        break;
    case 8:
        cout << "��Ÿ�� ���õƽ��ϴ�." << endl << endl;
        etc.ShowInfo();
        break;
    }
    */
    return 0;
}