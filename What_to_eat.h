#ifndef __What_TO_EAT_H__
#define __What_TO_EAT_H__

#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

class Western 
{
private:
	string food[8] = { "스테이크","파스타","피자","리조또","햄버거","필라프", "부리또", "브런치" };
public:
	void ShowInfo();
};

class Etc 
{
private:
	string food[8] = { "쌀국수", "샤브샤브", "카레", "밀면/칼국수", "샐러드", "샌드위치", "토스트", "맥주" };
public:
	void ShowInfo();
};

void Select(int);
#endif __WHAT_TO_EAT_H__
