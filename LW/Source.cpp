#include <iostream>
#include<stdio.h>
#include<windows.h>
#include<fstream>

using namespace std;

void THEME()
{
	cout << "1) Цвета\n2) Животные\n3) Прилагательные\n4) Погода\n5) Личные\n6) Глаголы \n7) Семья\n8) Фрукты и овощи\n9) Еда и напитки\n10) Природа" << endl;;
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

	system("pause");
	return 0;
}