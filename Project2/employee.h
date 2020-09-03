#pragma once
#include <iostream>
#include <string>
#include "worker.h"
//普通职工文件
using namespace std;


class Employee :public Worker
{
public:
	//显示个人信息
	virtual void showInfo();

	//获取岗位名称
	virtual string getDeptName();

	Employee(int id, string name, int dId); //初始化
	~Employee();
};

