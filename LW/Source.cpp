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

	cout << "Здравсвуйте "<<name<<"\nВас приветствует программа по заучиванию иностранных "
		"слов, я буду рад вам помочь с иностранным языком.\n";
	cout << "Введите своё имя. В качестве разделителя "
		"используёте нижнее подчёркивание:\n";

	system("pause");
	return 0;
}