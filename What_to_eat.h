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
	string food[8] = { "������ũ","�Ľ�Ÿ","����","������","�ܹ���","�ʶ���", "�θ���", "�귱ġ" };
public:
	void ShowInfo();
};

class Etc 
{
private:
	string food[8] = { "�ұ���", "�������", "ī��", "�и�/Į����", "������", "������ġ", "�佺Ʈ", "����" };
public:
	void ShowInfo();
};

void Select(int);
#endif __WHAT_TO_EAT_H__
