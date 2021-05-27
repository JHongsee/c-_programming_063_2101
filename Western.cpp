#include "What_to_eat.h"

void Western::ShowInfo() 
{
	int i = rand() % food->size(); //0부터 (M-1)까지의 수가 생성됨
	cout << food[i] << "는 어때요?" << endl << endl;
	cout << "*****추천식당*****" << endl;

	switch (i) {
	case 0:		//스테이크
		cout << "설어정 " << "051-583-1239" << endl;
		cout << "잇쇼우안 스테이크 " << "0507-1365-0019" << endl;
		cout << "시어링앤 스터프 " << "0507-1320-6227" << endl;
		break;
	case 1:		//파스타
		cout << "리틀프랑 " << "051-581-0056" << endl;
		cout << "레오 " << "0507-1416-7799" << endl;
		cout << "마린파스타 " << "051-913-2399" << endl;
		break;
	case 2:		//피자
		cout << "에쎄노베 " << "070-7755-4088" << endl;
		cout << "17테이블 " << "0507-1394-1718" << endl;
		cout << "꼬모도화덕피자 " << "0507-1414-9995" << endl;
		break;
	case 3:		//리조또
		cout << "델라고 " << "051-515-1504" << endl;
		cout << "리멘시타 " << "051-513-1001" << endl;
		cout << "미태리 " << "051-635-5525" << endl;
		break;
	case 4:		//햄버거
		cout << "791버거트럭 " << "0507-1419-7910" << endl;
		cout << "버거킹 " << "070-7462-6769" << endl;
		cout << "맥도날드 " << "070-7017-0406" << endl;
		break;
	case 5:		//필라프
		cout << "다락마을 " << "" << endl;
		cout << "코코브라운 " << "0507-1403-0777" << endl;
		break;
	case 6:		//부리또
		cout << "엘부리또 " << "051-518-3306" << endl;
		cout << "나우잇 " << "0507-1346-9713" << endl;
		break;
	case 7:		//브런치
		cout << "웬디스키친 " << "0507-1409-5043" << endl;
		cout << "더브런치 " << "051-518-9074" << endl;
		cout << "브런치가든숲 " << "0507-1324-3382" << endl;
		break;
	}
}