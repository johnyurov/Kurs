#include <iostream>
#include<stdio.h>
#include<windows.h>
#include<fstream>

using namespace std;

void THEME()
{
	cout << "1) �����\n2) ��������\n3) ��������������\n4) ������\n5) ������\n6) ������� \n7) �����\n8) ������ � �����\n9) ��� � �������\n10) �������" << endl;;
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

	system("pause");
	return 0;
}