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
			char ch = '-';
			char ch1 = ':';
			char h, word2[256];
			int choose;
			string path = "�����.txt";
			ifstream theme_one;
			theme_one.open(path);
			if (theme_one)
			{
				while (!theme_one.eof())
				{
					theme_one >> words;
					theme_one.getline(words, 256, ch1);
					cout << words<<endl << endl;
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
				for (int i = 1; i <= 10; i++)
				{
					if (theme_one)
					{
						theme_one >> words;
						theme_one.getline(words, 256, ch);
						cout << words << " - ";
					}
					cin >> word2;
				}theme_one.close();
				break;
			}
			case 2:
			{
				cout << "��� ���������� �������� ���������� ������� ����,\n��� ����� ��� ����� ����������� ������� �� ������� �����,\n� ������� �� ������ �������� ����� �� ��������� �����" << endl;
				theme_one.open(path);
				for (int i = 1; i <= 11; i++)
				{
					if (theme_one)
					{
						theme_one >> words;
						theme_one.getline(words, 256);
						cout << words << "\t - ";
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
			break;
		}
		case 2:
		{
			char words[256];
			char ch = '-';
			char ch1 = ':';
			char h, word2[256];
			int choose;
			string path = "��������.txt";
			ifstream theme_one;
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
				for (int i = 1; i <= 10; i++)
				{
					if (theme_one)
					{
						theme_one >> words;
						theme_one.getline(words, 256, ch);
						cout << words << " - ";
					}
					cin >> word2;
				}theme_one.close();
				break;
			}
			case 2:
			{
				cout << "��� ���������� �������� ���������� ������� ����,\n��� ����� ��� ����� ����������� ������� �� ������� �����,\n� ������� �� ������ �������� ����� �� ��������� �����" << endl;
				theme_one.open(path);
				for (int i = 1; i <= 11; i++)
				{
					if (theme_one)
					{
						theme_one >> words;
						theme_one.getline(words, 256);
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
			break;
		}
		case 3:
		{
			cout << "\n�� ������� ������ ����, ���� ������������ ������ ����.\n\n������������ � ��� � ������� �������������� �����." << endl << endl;
			char words[256];
			char ch = '-';
			char ch1 = ':';
			char h, word2[256];
			int choose;
			string path = "��������������.txt";
			ifstream theme_one;
			theme_one.open(path);
			if (theme_one)
			{
				while (!theme_one.eof())
				{
					theme_one.getline(words, 256, ch1);
					cout << words<<endl << endl;
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
				for (int i = 1; i <= 10; i++)
				{
					if (theme_one)
					{
						theme_one >> words;
						theme_one.getline(words, 256, ch);
						cout << words << " - ";
					}
					cin >> word2;
				}theme_one.close();
				break;
			}
			case 2:
			{
				cout << "��� ���������� �������� ���������� ������� ����,\n��� ����� ��� ����� ����������� ������� �� ������� �����,\n� ������� �� ������ �������� ����� �� ��������� �����" << endl;
				theme_one.open(path);
				for (int i = 1; i <= 11; i++)
				{
					if (theme_one)
					{
						theme_one >> words;
						theme_one.getline(words, 256);
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
					cout << words << endl << endl;
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
					cout << words << endl << endl;
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
					cout << words << endl << endl;
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
					cout << words << endl << endl;
				}
			}
			break;
		}
		case 8:
		{
			cout << "\n�� ������� ������� ����, ���� ������������ ������ ����.\n\n������������ � ��� � ������� �������������� �����." << endl << endl;
			char words[256];
			char ch = ':';
			string path = "������ � �����.txt";
			ifstream theme_one;
			theme_one.open(path);
			if (theme_one)
			{
				while (!theme_one.eof())
				{
					theme_one.getline(words, 256, ch);
					cout << words << endl << endl;
				}
			}
			break;
		}
		case 9:
		{
			cout << "\n�� ������� ������� ����, ���� ������������ ������ ����.\n\n������������ � ��� � ������� �������������� �����." << endl << endl;
			char words[256];
			char ch = ':';
			string path = "��� � �������.txt";
			ifstream theme_one;
			theme_one.open(path);
			if (theme_one)
			{
				while (!theme_one.eof())
				{
					theme_one.getline(words, 256, ch);
					cout << words << endl << endl;
				}
			}
			break;
		}
		case 10:
		{
			cout << "\n�� ������� ������� ����, ���� ������������ ������ ����.\n\n������������ � ��� � ������� �������������� �����." << endl << endl;
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
					cout << words << endl << endl;
				}
			}
			break;
		}
		default:
		{
			cout << "�� ������� ������� ����� ����, ��������� ��������� ������ � ���������� ��� ���" << endl;
			exit(1);
		}
		}
		
	
}

void TEST()
{
	
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
	TEST();
	system("pause");
	return 0;
}