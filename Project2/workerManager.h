#pragma once //��ֹͷ�ļ��ظ�����
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

	//չʾ�˵�
	void show_Menu();

	//�˳�ϵͳ
	void ExitSystem();

	//��¼ְ������
	int m_EmpNum;

	//ְ������ָ��
	Worker ** m_EmpArray;

	//����ְ������
	void Add_Emp();

	//�����ļ�
	void save();

	//�ж��ļ��Ƿ�Ϊ�� ��־
	bool m_FileIsEmpty;

	//ͳ���ļ�����
	int get_EmpNum();

	//��ʼ��Ա��
	void init_Emp();

	//��ʾְ��
	void Show_Emp();

	//ɾ��ְ��
	void Del_Emp();

	//�ж�ְ���Ƿ����
	int isExist(int id);

	//�޸�ְ��
	void Mod_Emp();

	//����ְ��
	void Find_Emp();

	//����ְ��
	void Sort_Emp();

	//����ļ�
	void Clean_File();


	~workerManager();
};
