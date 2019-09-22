#include <iostream>
#include<stdio.h>
#include<windows.h>
#include<fstream>

using namespace std;

void THEME()
{
	cout << "1) Цвета\n2) Животные\n3) Прилагательные\n4) Погода\n5) Личные\n6) Глаголы \n7) Семья\n8) Фрукты и овощи\n9) Еда и напитки\n10) Природа" << endl;;
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