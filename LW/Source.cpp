#include <iostream>
#include<stdio.h>
#include<windows.h>
#include<fstream>

using namespace std;

void THEME()
{
	cout << "1) �����\n2) ��������\n3) ��������������\n4) ������\n5) ������\n6) ������� \n7) �����\n8) ������ � �����\n9) ��� � �������\n10) �������" << endl;;
}

void CHOOSE_THEME()
{
	int a;
	cout << "�������� ���� �� 10 ���\n:";
	
		cin >> a;
		switch (a)
		{
		case 1:
		{

			break;
		}
		case 2:
		{

			break;
		}
		case 3:
		{

			break;
		}
		case 4:
		{

			break;
		}
		case 5:
		{

			break;
		}
		case 6:
		{

			break;
		}
		case 7:
		{

			break;
		}
		case 8:
		{

			break;
		}
		case 9:
		{

			break;
		}
		case 10:
		{

			break;
		}
		default:
		{
			cout << "�� ������� ������� ����� ����, ��������� ��������� ������ � ���������� ��� ���" << endl;
			exit(1);
		}
		}
	
	
}

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char name[10240];
	cout << "������� ��� ���.\n:";
	gets_s(name);
	cout << "����������� "<<name<<"\n��� ������������ ��������� �� ���������� ����������� "
		"����, � ���� ��� ��� ������ � ����������� ������.\n ��� ��� ����� ������������ �� ����� 10 ���:\n";
	THEME();
	CHOOSE_THEME();
	system("pause");
	return 0;
}