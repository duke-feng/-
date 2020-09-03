#pragma once //防止头文件重复包含
#include <iostream>
#include "worker.h"
#include "employee.h"
#include "Manager.h"
#include "Boss.h"

#include <fstream>
#define FILENAME "emFile.txt"

using namespace std;

class workerManager
{
public:
	workerManager();

	//展示菜单
	void show_Menu();

	//退出系统
	void ExitSystem();

	//记录职工人数
	int m_EmpNum;

	//职工数组指针
	Worker ** m_EmpArray;

	//添加职工功能
	void Add_Emp();

	//保存文件
	void save();

	//判断文件是否为空 标志
	bool m_FileIsEmpty;

	//统计文件人数
	int get_EmpNum();

	//初始化员工
	void init_Emp();

	//显示职工
	void Show_Emp();

	//删除职工
	void Del_Emp();

	//判断职工是否存在
	int isExist(int id);

	//修改职工
	void Mod_Emp();

	//查找职工
	void Find_Emp();

	//排序职工
	void Sort_Emp();

	//清空文件
	void Clean_File();


	~workerManager();
};

