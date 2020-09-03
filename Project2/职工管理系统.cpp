#include <iostream>
using namespace std;
#include "workerManager.h"

//#include "worker.h"
//#include "employee.h"
//#include "Boss.h"
//#include "Manager.h"


int main()
{
	////测试代码
	//Worker * worker = NULL;
	//worker = new Employee(1, "张三", 1);
	//worker->showInfo();
	//delete worker;

	//worker = new Manager(2, "李四", 2);
	//worker->showInfo();
	//delete worker;

	//worker = new Boss(3, "王五", 3);
	//worker->showInfo();
	//delete worker;

	workerManager wm;

	int choice = 0;

	while (true)
	{
		//显示菜单
		wm.show_Menu();

		cout << "请输入您的选择：" << endl;
		cin >> choice; //接收用户的选择

		switch (choice)
		{
		case 0: //退出
			wm.ExitSystem();
			break;
		case 1: //增加
			wm.Add_Emp();
			break;
		case 2: //显示
			wm.Show_Emp();
			break;
		case 3: //删除
			wm.Del_Emp();
		{
			////测试
			//int ret = wm.isExist(1);
			//if (ret != -1)
			//{
			//	cout << "职工存在" << endl;
			//}
			//else
			//{
			//	cout << "职工不存在" << endl;
			//}
			//break; 
		}
		case 4: //修改
			wm.Mod_Emp();
			break;
		case 5: //查找
			wm.Find_Emp();
			break;
		case 6: //排序
			wm.Sort_Emp();
			break;
		case 7: //清空
			break;
		default:
			system("cls");//清屏
			break;
		}
	}


	system("pause");

	return 0;
}