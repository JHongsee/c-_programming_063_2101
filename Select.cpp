#include "What_to_eat.h"

void Select(int sel) 
{    
    Western west;
    Etc etc;

    switch (sel) {
    case 1:
        //cout << "중식이 선택됐습니다." << endl << endl;
        //chinese chin;
        //chin.ShowRandom();
        break;
    case 2:
        //cout << "일식이 선택됐습니다." << endl << endl;
        //japanese jap;
        break;
    case 3:
        //cout << "고기가 선택됐습니다." << endl << endl;
        break;
    case 4:
        //cout << "양식이 선택됐습니다." << endl << endl;
        west.ShowInfo();
        break;
    case 5:
        //cout << "한식이 선택됐습니다." << endl << endl;
        break;
    case 6:
        //cout << "치킨이 선택됐습니다." << endl << endl;
        break;
    case 7:
        //cout << "분식/야식이 선택됐습니다." << endl << endl;
        break;
    case 8:
        //cout << "기타가 선택됐습니다." << endl << endl;
        etc.ShowInfo();
        break;
    }
}