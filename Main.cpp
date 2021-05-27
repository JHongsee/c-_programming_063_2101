#include "What_to_eat.h"

int main()
{
    int sel;
    srand((unsigned int)time(NULL)); //시드값 설정해주기.
    string menu[8] = { "중식","일식","고기","양식","한식","치킨","분식/야식","기타" };
    cout << "오늘 뭐 먹지..." << endl;
    for (int i = 0; i < 8; i++)
        cout << i + 1 << '.' << menu[i] << ' ';
    cout << endl;
    cin >> sel;
    cout << menu[sel - 1] << "이(가) 땡긴다!" << endl;

    Select(sel);
    /*
    Western west;
    Etc etc;

    switch (k) {
    case 1:
        cout << "중식이 선택됐습니다." << endl << endl;
        //chinese chin;
        //chin.ShowRandom();
        break;
    case 2:
        cout << "일식이 선택됐습니다." << endl << endl;
        //japanese jap;
        break;
    case 3:
        cout << "고기가 선택됐습니다." << endl << endl;
        break;
    case 4:
        cout << "양식이 선택됐습니다." << endl << endl;
        west.ShowInfo();
        break;
    case 5:
        cout << "한식이 선택됐습니다." << endl << endl;
        break;
    case 6:
        cout << "치킨이 선택됐습니다." << endl << endl;
        break;
    case 7:
        cout << "분식/야식이 선택됐습니다." << endl << endl;
        break;
    case 8:
        cout << "기타가 선택됐습니다." << endl << endl;
        etc.ShowInfo();
        break;
    }
    */
    return 0;
}