#pragma once
#include <iostream>
#include <string>
#include "worker.h"
//��ְͨ���ļ�
using namespace std;


class Employee :public Worker
{
public:
	//��ʾ������Ϣ
	virtual void showInfo();

	//��ȡ��λ����
	virtual string getDeptName();

	Employee(int id, string name, int dId); //��ʼ��
	~Employee();
};

