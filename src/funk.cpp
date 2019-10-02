#include <fstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;

void TEST_THEME(string path);
void CHOOSE_THEME() {
  int a;
  cout << "1) Цвета\n2) Животные\n3) Прилагательные\n4) Погода\n5) "
          "Личные\n6) Глаголы \n7) Семья\n8) Фрукты и овощи\n9) Еда и "
          "напитки\n10) Природа"
       << endl;
  cout << "Выберете одну из 10 тем\n:";

  cin >> a;
  switch (a) {
  case 1: {
    cout << "\nВы выбрали первую тему, ниже представлени список "
            "слов.\n\nОзнакомьтесь с ним и выучите представленные "
            "слова."
         << endl
         << endl;
    string path = "../text/цвета.txt";
    TEST_THEME(path);
    break;
  }
  case 2: {
    cout << "\nВы выбрали вторую тему, ниже представлени список "
            "слов.\n\nОзнакомьтесь с ним и выучите представленные "
            "слова."
         << endl
         << endl;
    string path = "../text/животные.txt";
    TEST_THEME(path);
    break;
  }
  case 3: {
    cout << "\nВы выбрали третью тему, ниже представлени список "
            "слов.\n\nОзнакомьтесь с ним и выучите представленные "
            "слова."
         << endl
         << endl;
    string path = "../text/прилагательные.txt";
    TEST_THEME(path);
    break;
  }
  case 4: {
    cout << "\nВы выбрали четвертую тему, ниже представлени список "
            "слов.\n\nОзнакомьтесь с ним и выучите представленные "
            "слова."
         << endl
         << endl;
    string path = "../text/погода.txt";
    TEST_THEME(path);
    break;
  }
  case 5: {
    cout << "\nВы выбрали пятую тему, ниже представлени список "
            "слов.\n\nОзнакомьтесь с ним и выучите представленные "
            "слова."
         << endl
         << endl;
    string path = "../text/личные.txt";
    TEST_THEME(path);
    break;
  }
  case 6: {
    cout << "\nВы выбрали шестую тему, ниже представлени список "
            "слов.\n\nОзнакомьтесь с ним и выучите представленные "
            "слова."
         << endl
         << endl;
    string path = "../text/глаголы.txt";
    TEST_THEME(path);
    break;
  }
  case 7: {
    cout << "\nВы выбрали седьмую тему, ниже представлени список "
            "слов.\n\nОзнакомьтесь с ним и выучите представленные "
            "слова."
         << endl
         << endl;
    string path = "../text/семья.txt";
    TEST_THEME(path);
    break;
  }
  case 8: {
    cout << "\nВы выбрали восьмую тему, ниже представлени список "
            "слов.\n\nОзнакомьтесь с ним и выучите представленные "
            "слова."
         << endl
         << endl;
    string path = "../text/фрукты и овощи.txt";
    TEST_THEME(path);
    break;
  }
  case 10: {
    cout << "\nВы выбрали десятую тему, ниже представлени список "
            "слов.\n\nОзнакомьтесь с ним и выучите представленные "
            "слова."
         << endl
         << endl;
    string path = "../text/природа.txt";
    TEST_THEME(path);
    break;
  }
  default: {
    cout << "вы неверно указали номер темы, запустите программу заново и "
            "попробуйте еще раз"
         << endl;
    exit(1);
  }
  }
}
void TEST_THEME(string path) {
  char words[256];
  char ch = '-';
  char ch1 = ':';
  char h, word2[256];
  char choose;
  ifstream theme_one;
  theme_one.open(path);
  if (theme_one) {
    while (!theme_one.eof()) {
      theme_one.getline(words, 256, ch1);
      cout << words << endl << endl;
    }
  }
  theme_one.close();
  cout << "После того, как выучите все слова и будите готовы,\nвведите любую "
          "клавишу, чтобы проверить ваши знания."
       << endl;
  cin >> h;
  system("clear");
  cout << "Вы можете выбрать два варианта проверки, \n1) первый вариант вам "
          "дано слово на английском, вы пишете его на русском,"
          "\n2) второй вариант наоборот дано русское слово, вы пишите его "
          "значение на ангийском"
       << endl;
  cout << "Введите 1 для первого варианта, 2 для второго" << endl;
  do {
    cin >> choose;
  } while (choose != '1' && choose != '2');
  switch (choose) {
  case '1': {
    cout << "Вам необходимо написать правильный перевод слов,\nдля этого "
            "вам будет предствален вариант на английсом языке,\nк которму "
            "вы должны написать слово на русском языке"
         << endl;
    theme_one.open(path);

    if (theme_one) {
      while (!theme_one.eof()) {
        theme_one.getline(words, 256, ch);
        cout << words << " - ";
        theme_one >> words;
        cin >> word2;
      }
    }

    theme_one.close();
    break;
  }
  case '2': {
    cout << "Вам необходимо написать правильный перевод слов,\nдля этого "
            "вам будет предствален вариант на русском языке,\nк которму вы "
            "должны написать слово на английсом языке"
         << endl;
    theme_one.open(path);

    if (theme_one) {
      while (!theme_one.eof()) {
        theme_one >> words;
        theme_one.getline(words, 256);
        cout << words << " \t - ";
        cin >> word2;
      }
    }

    theme_one.close();
    break;
  }
  default:
    break;
  }
  cout << "\nПоздраляю, вы закончили тестирование.\n\nТеперь сравните ваш "
          "ответ с правильным написанием"
       << endl;
  theme_one.open(path);
  if (theme_one) {
    while (!theme_one.eof()) {
      theme_one.getline(words, 256, ch1);
      cout << words << endl << endl;
    }
  }
  theme_one.close();
}
