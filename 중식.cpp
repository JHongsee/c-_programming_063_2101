#include <iostream>
using namespace std;

template <typename T>
class Chinese
{
protected:
    T arr[4];
public:
    Chinese(noodle.menu1, noodle.menu2, fried_rice.menu1, fried_rice.menu2)
    {
        arr[0] = noodle.menu1;
        arr[1] = noodle.menu2;
        arr[2] = fried_rice.menu1;
        arr[3] = fried_rice.menu2;
    }
};

class noodle : public Chinese
{
private:
    const char* menu[2] = { "¥���","«��" };
public:
    const char* Getmenu(int i)
    {
        return menu[i];
    }

    void ShowRestInfo(int i)
    {
        if (i == 0)
        {
            cout << Chinese.arr[i] << " �Ĵ�����" << endl;
            cout << "�Ĵ�1" << " ��ȣ1" << endl;
            cout << "�Ĵ�2" << " ��ȣ2" << endl;
        }
        else if (i == 1)
        {
            cout << Chinese.arr[i] << " �Ĵ�����" << endl;
            cout << "�Ĵ�3" << " ��ȣ3" << endl;
            cout << "�Ĵ�4" << " ��ȣ4" << endl;
        }
    }
};

class fried_rice : public Chinese
{
private:
    const char* menu[2] = { "���캺����","�Ｑ������" };
public:
    const char* Getmenu(int i)
    {
        return menu[i];
    }
    void ShowRestInfo(int i)
    {
        if (i == 0)
        {
            cout << Chinese.arr[i] << " �Ĵ�����" << endl;
            cout << "�Ĵ�5" << " ��ȣ5" << endl;
            cout << "�Ĵ�6" << " ��ȣ6" << endl;
        }
        else if (i == 1)
        {
            cout << Chinese.arr[i] << " �Ĵ�����" << endl;
            cout << "�Ĵ�7" << " ��ȣ7" << endl;
            cout << "�Ĵ�8" << " ��ȣ8" << endl;
        }
    }
};