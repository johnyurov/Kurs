#include <iostream>
#include<stdio.h>
#include<string>
#include<windows.h>
#include<fstream>

using namespace std;

void THEME()
{
	cout << "1) Цвета\n2) Животные\n3) Прилагательные\n4) Погода\n5) Личные\n6) Глаголы \n7) Семья\n8) Фрукты и овощи\n9) Еда и напитки\n10) Природа" << endl;
}

void CHOOSE_THEME()
{
	int a;
	cout << "Выберете одну из 10 тем\n:";
	
		cin >> a;
		switch (a)
		{
		case 1:
		{
			cout << "\nВы выбрали первую тему, ниже представлени список слов.\n\nОзнакомьтесь с ним и выучите представленные слова." << endl << endl;
			char words[256];
			char ch = ':';
			string path = "цвета.txt";
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
			cout << "\nВы выбрали вторую тему, ниже представлени список слов.\n\nОзнакомьтесь с ним и выучите представленные слова." << endl << endl;
			char words[256];
			char ch = ':';
			string path = "животные.txt";
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
			cout << "\nВы выбрали третью тему, ниже представлени список слов.\n\nОзнакомьтесь с ним и выучите представленные слова." << endl << endl;
			char words[256];
			char ch = ':';
			string path = "прилагательные.txt";
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
			cout << "\nВы выбрали четвертую тему, ниже представлени список слов.\n\nОзнакомьтесь с ним и выучите представленные слова." << endl << endl;
			char words[256];
			char ch = ':';
			string path = "погода.txt";
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
			cout << "\nВы выбрали пятую тему, ниже представлени список слов.\n\nОзнакомьтесь с ним и выучите представленные слова." << endl << endl;
			char words[256];
			char ch = ':';
			string path = "личные.txt";
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
			cout << "\nВы выбрали шестую тему, ниже представлени список слов.\n\nОзнакомьтесь с ним и выучите представленные слова." << endl << endl;
			char words[256];
			char ch = ':';
			string path = "глаголы.txt";
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
			cout << "\nВы выбрали седьмую тему, ниже представлени список слов.\n\nОзнакомьтесь с ним и выучите представленные слова." << endl << endl;
			char words[256];
			char ch = ':';
			string path = "семья.txt";
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
			cout << "вы неверно указали номер темы, запустите программу заново и попробуйте еще раз" << endl;
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
	cout << "Введите своё имя.\n:";
	gets_s(name);
	cout << "Здравсвуйте "<<name<<"\nВас приветствует программа по заучиванию иностранных "
		"слов, я буду рад вам помочь с иностранным языком.\n Для вас будут представлены на выбор 10 тем:\n";
	THEME();
	CHOOSE_THEME();
	system("pause");
	return 0;
}