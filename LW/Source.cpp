#include <iostream>
#include<stdio.h>
#include<string>
#include<windows.h>
#include<fstream>

using namespace std;

void THEME()
{
	cout << "1) �����\n2) ��������\n3) ��������������\n4) ������\n5) ������\n6) ������� \n7) �����\n8) ������ � �����\n9) ��� � �������\n10) �������" << endl;
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
			cout << "\n�� ������� ������ ����, ���� ������������ ������ ����.\n\n������������ � ��� � ������� �������������� �����." << endl << endl;
			char words[256];
			char ch = ':';
			string path = "�����.txt";
			ifstream theme_one;
			theme_one.open(path);
			if (theme_one)
			{
				while (!theme_one.eof())
				{
					theme_one.getline(words, 256, ch);
					cout << words<<endl;
				}
			}
			break;
		}
		case 2:
		{
			cout << "\n�� ������� ������ ����, ���� ������������ ������ ����.\n\n������������ � ��� � ������� �������������� �����." << endl << endl;
			char words[256];
			char ch = ':';
			string path = "��������.txt";
			ifstream theme_one;
			theme_one.open(path);
			if (theme_one)
			{
				while (!theme_one.eof())
				{
					theme_one.getline(words, 256, ch);
					cout << words<<endl ;
				}
			}
			break;
		}
		case 3:
		{
			cout << "\n�� ������� ������ ����, ���� ������������ ������ ����.\n\n������������ � ��� � ������� �������������� �����." << endl << endl;
			char words[256];
			char ch = ':';
			string path = "��������������.txt";
			ifstream theme_one;
			theme_one.open(path);
			if (theme_one)
			{
				while (!theme_one.eof())
				{
					theme_one.getline(words, 256, ch);
					cout << words<<endl;
				}
			}
			break;
		}
		case 4:
		{
			cout << "\n�� ������� ��������� ����, ���� ������������ ������ ����.\n\n������������ � ��� � ������� �������������� �����." << endl << endl;
			char words[256];
			char ch = ':';
			string path = "������.txt";
			ifstream theme_one;
			theme_one.open(path);
			if (theme_one)
			{
				while (!theme_one.eof())
				{
					theme_one.getline(words, 256, ch);
					cout << words << endl;
				}
			}
			break;
		}
		case 5:
		{
			cout << "\n�� ������� ����� ����, ���� ������������ ������ ����.\n\n������������ � ��� � ������� �������������� �����." << endl << endl;
			char words[256];
			char ch = ':';
			string path = "������.txt";
			ifstream theme_one;
			theme_one.open(path);
			if (theme_one)
			{
				while (!theme_one.eof())
				{
					theme_one.getline(words, 256, ch);
					cout << words << endl;
				}
			}
			break;
		}
		case 6:
		{
			cout << "\n�� ������� ������ ����, ���� ������������ ������ ����.\n\n������������ � ��� � ������� �������������� �����." << endl << endl;
			char words[256];
			char ch = ':';
			string path = "�������.txt";
			ifstream theme_one;
			theme_one.open(path);
			if (theme_one)
			{
				while (!theme_one.eof())
				{
					theme_one.getline(words, 256, ch);
					cout << words << endl;
				}
			}
			break;
		}
		case 7:
		{
			cout << "\n�� ������� ������� ����, ���� ������������ ������ ����.\n\n������������ � ��� � ������� �������������� �����." << endl << endl;
			char words[256];
			char ch = ':';
			string path = "�����.txt";
			ifstream theme_one;
			theme_one.open(path);
			if (theme_one)
			{
				while (!theme_one.eof())
				{
					theme_one.getline(words, 256, ch);
					cout << words << endl;
				}
			}
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