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
void TEST_THEME(string path);
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
			string path = "�����.txt";
			TEST_THEME(path);
			break;
		}
		case 2:
		{
			cout << "\n�� ������� ������ ����, ���� ������������ ������ ����.\n\n������������ � ��� � ������� �������������� �����." << endl << endl;
			string path = "��������.txt";
			TEST_THEME(path);
			break;
		}
		case 3:
		{
			cout << "\n�� ������� ������ ����, ���� ������������ ������ ����.\n\n������������ � ��� � ������� �������������� �����." << endl << endl;
			string path = "��������������.txt";
			TEST_THEME(path);
			break;
		}
		case 4:
		{
			cout << "\n�� ������� ��������� ����, ���� ������������ ������ ����.\n\n������������ � ��� � ������� �������������� �����." << endl << endl;
			string path = "������.txt";
			TEST_THEME(path);
			break;
		}
		case 5:
		{
			cout << "\n�� ������� ����� ����, ���� ������������ ������ ����.\n\n������������ � ��� � ������� �������������� �����." << endl << endl;
			string path = "������.txt";
			TEST_THEME(path);
			break;
		}
		case 6:
		{
			cout << "\n�� ������� ������ ����, ���� ������������ ������ ����.\n\n������������ � ��� � ������� �������������� �����." << endl << endl;
			string path = "�������.txt";
			TEST_THEME(path);
			break;
		}
		case 7:
		{
			cout << "\n�� ������� ������� ����, ���� ������������ ������ ����.\n\n������������ � ��� � ������� �������������� �����." << endl << endl;
			string path = "�����.txt";
			TEST_THEME(path);
			break;
		}
		case 8:
		{
			cout << "\n�� ������� ������� ����, ���� ������������ ������ ����.\n\n������������ � ��� � ������� �������������� �����." << endl << endl;
			string path = "������ � �����.txt";
			TEST_THEME(path);
			break;
		}
		case 10:
		{
			cout << "\n�� ������� ������� ����, ���� ������������ ������ ����.\n\n������������ � ��� � ������� �������������� �����." << endl << endl;
			string path = "�������.txt";
			TEST_THEME(path);
			break;
		}
		default:
		{
			cout << "�� ������� ������� ����� ����, ��������� ��������� ������ � ���������� ��� ���" << endl;
			exit(1);
		}
		}
		
	
}


void TEST_THEME(string path)
{
	char words[256];
	char ch = '-';
	char ch1 = ':';
	char h, word2[256];
	int choose;
	ifstream theme_one;
	theme_one.open(path);
	if (theme_one)
	{
		while (!theme_one.eof())
		{
			theme_one.getline(words, 256, ch1);
			cout << words << endl << endl;
		}
	}
	theme_one.close();
	cout << "����� ����, ��� ������� ��� ����� � ������ ������,\n������� ����� �������, ����� ��������� ���� ������." << endl;
	cin >> h;
	system("cls");
	cout << "�� ������ ������� ��� �������� ��������, \n1) ������ ������� ��� ���� ����� �� ����������, �� ������ ��� �� �������,"
		"\n2) ������ ������� �� ������ ���� ������� �����, �� ������ ��� �������� �� ���������" << endl;
	cout << "������� 1 ��� ������� ��������, 2 ��� �������" << endl;
	do
	{
		cin >> choose;
	} while (choose != 1 && choose != 2);
	switch (choose)
	{
	case 1:
	{
		cout << "��� ���������� �������� ���������� ������� ����,\n��� ����� ��� ����� ����������� ������� �� ��������� �����,\n� ������� �� ������ �������� ����� �� ������� �����" << endl;
		theme_one.open(path);
		
			if (theme_one)
			{
				while (!theme_one.eof())
				{
					theme_one >> words;
					theme_one.getline(words, 256, ch);
					cout << words << " - ";
					cin >> word2;
				}
			}
			
		theme_one.close();
		break;
	}
	case 2:
	{
		cout << "��� ���������� �������� ���������� ������� ����,\n��� ����� ��� ����� ����������� ������� �� ������� �����,\n� ������� �� ������ �������� ����� �� ��������� �����" << endl;
		theme_one.open(path);
		while(!theme_one.eof())
		{
			if (theme_one)
			{
				theme_one.getline(words, 256);
				theme_one >> words;
				cout << words << " \t - ";
			}
			cin >> word2;
		}theme_one.close();
		break;
	}
	default:
		break;
	}
	cout << "\n���������, �� ��������� ������������.\n\n������ �������� ��� ����� � ���������� ����������" << endl;
	theme_one.open(path);
	if (theme_one)
	{
		while (!theme_one.eof())
		{
			theme_one >> words;
			theme_one.getline(words, 256, ch1);
			cout << words << endl << endl;
		}
	}
	theme_one.close();
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