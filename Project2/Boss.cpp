#include "Boss.h"

//显示个人信息
void Boss::showInfo()
{
	cout << "职工编号: " << this->m_Id
		<< "\t职工姓名: " << this->m_Name
		<< "\t岗位: " << this->getDeptName()
		<< "\t岗位职责: 管理所有事务，给经理下发任务" << endl;
}

//获取岗位名称
string Boss::getDeptName()
{
	return string("老板");
}


Boss::Boss(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}


Boss::~Boss()
{
}
