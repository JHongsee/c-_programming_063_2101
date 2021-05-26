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
    const char* menu[2] = { "짜장면","짬뽕" };
public:
    const char* Getmenu(int i)
    {
        return menu[i];
    }

    void ShowRestInfo(int i)
    {
        if (i == 0)
        {
            cout << Chinese.arr[i] << " 식당정보" << endl;
            cout << "식당1" << " 번호1" << endl;
            cout << "식당2" << " 번호2" << endl;
        }
        else if (i == 1)
        {
            cout << Chinese.arr[i] << " 식당정보" << endl;
            cout << "식당3" << " 번호3" << endl;
            cout << "식당4" << " 번호4" << endl;
        }
    }
};

class fried_rice : public Chinese
{
private:
    const char* menu[2] = { "새우볶음밥","삼선볶음밥" };
public:
    const char* Getmenu(int i)
    {
        return menu[i];
    }
    void ShowRestInfo(int i)
    {
        if (i == 0)
        {
            cout << Chinese.arr[i] << " 식당정보" << endl;
            cout << "식당5" << " 번호5" << endl;
            cout << "식당6" << " 번호6" << endl;
        }
        else if (i == 1)
        {
            cout << Chinese.arr[i] << " 식당정보" << endl;
            cout << "식당7" << " 번호7" << endl;
            cout << "식당8" << " 번호8" << endl;
        }
    }
};