#include "Manager.h"

//显示个人信息
void Manager::showInfo()
{
	cout << "职工编号: " << this->m_Id
		<< "\t职工姓名: " << this->m_Name
		<< "\t岗位: " << this->getDeptName()
		<< "\t岗位职责: 完成老板的任务， 并且给员工下发任务" << endl;
}

//获取岗位名称
string Manager::getDeptName()
{
	return string("经理");
}


Manager::Manager(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}


Manager::~Manager()
{
}
