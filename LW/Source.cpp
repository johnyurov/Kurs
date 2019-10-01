#include "funk.h"
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    char name[10356];
    cout << "Введите своё имя.\n:";
    cin.getline(name, 10356);
    cout << "Здравсвуйте " << name
         << "\nВас приветствует программа по заучиванию иностранных "
            "слов, я буду рад вам помочь с иностранным языком.\n Для вас будут "
            "представлены на выбор 10 тем:\n";
    CHOOSE_THEME();
    return 0;
}
