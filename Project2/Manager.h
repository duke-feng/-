#pragma once
#include <iostream>
#include <string>
#include "worker.h"

using namespace std;


class Manager : public Worker
{
public:
	//显示个人信息
	virtual void showInfo();

	//获取岗位名称
	virtual string getDeptName();

	Manager(int id, string name, int dId);

	~Manager();
};

