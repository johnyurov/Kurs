#include <iostream>
#include<windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char name[10240];
	cin >> name;

	cout << "����������� "<<name<<"\n��� ������������ ��������� �� ���������� ����������� "
		"����, � ���� ��� ��� ������ � ����������� ������.\n";
	cout << "������� ��� ���. � �������� ����������� "
		"���������� ������ �������������:\n";

	system("pause");
	return 0;
}