#include <fstream>
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

void TEST_THEME(string path)
{
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
    cout << "����� ����, ��� ������� ��� ����� � ������ ������,\n������� ����� "
            "�������, ����� ��������� ���� ������."
         << endl;
    cin >> h;
    system("clear");
    cout << "�� ������ ������� ��� �������� ��������, \n1) ������ ������� ��� "
            "���� ����� �� ����������, �� ������ ��� �� �������,"
            "\n2) ������ ������� �������� ���� ������� �����, �� ������ ��� "
            "�������� �� ���������"
         << endl;
    cout << "������� 1 ��� ������� ��������, 2 ��� �������" << endl;
    do {
        cin >> choose;
    } while (choose != '1' && choose != '2');
    switch (choose) {
    case '1': {
        cout << "��� ���������� �������� ���������� ������� ����,\n��� ����� "
                "��� ����� ����������� ������� �� ��������� �����,\n� ������� "
                "�� ������ �������� ����� �� ������� �����"
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
        cout << "��� ���������� �������� ���������� ������� ����,\n��� ����� "
                "��� ����� ����������� ������� �� ������� �����,\n� ������� �� "
                "������ �������� ����� �� ��������� �����"
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
    cout << "\n���������, �� ��������� ������������.\n\n������ �������� ��� "
            "����� � ���������� ����������"
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

void CHOOSE_THEME()
{
    int a;
    cout << "1) �����\n2) ��������\n3) ��������������\n4) ������\n5) "
            "������\n6) ������� \n7) �����\n8) ������ � �����\n9) ��� � "
            "�������\n10) �������"
         << endl;
    cout << "�������� ���� �� 10 ���\n:";

    cin >> a;
    switch (a) {
    case 1: {
        cout << "\n�� ������� ������ ����, ���� ������������ ������ "
                "����.\n\n������������ � ��� � ������� �������������� �����."
             << endl
             << endl;
        string path = "�����.txt";
        TEST_THEME(path);
        break;
    }
    case 2: {
        cout << "\n�� ������� ������ ����, ���� ������������ ������ "
                "����.\n\n������������ � ��� � ������� �������������� �����."
             << endl
             << endl;
        string path = "��������.txt";
        TEST_THEME(path);
        break;
    }
    case 3: {
        cout << "\n�� ������� ������ ����, ���� ������������ ������ "
                "����.\n\n������������ � ��� � ������� �������������� �����."
             << endl
             << endl;
        string path = "��������������.txt";
        TEST_THEME(path);
        break;
    }
    case 4: {
        cout << "\n�� ������� ��������� ����, ���� ������������ ������ "
                "����.\n\n������������ � ��� � ������� �������������� �����."
             << endl
             << endl;
        string path = "������.txt";
        TEST_THEME(path);
        break;
    }
    case 5: {
        cout << "\n�� ������� ����� ����, ���� ������������ ������ "
                "����.\n\n������������ � ��� � ������� �������������� �����."
             << endl
             << endl;
        string path = "������.txt";
        TEST_THEME(path);
        break;
    }
    case 6: {
        cout << "\n�� ������� ������ ����, ���� ������������ ������ "
                "����.\n\n������������ � ��� � ������� �������������� �����."
             << endl
             << endl;
        string path = "�������.txt";
        TEST_THEME(path);
        break;
    }
    case 7: {
        cout << "\n�� ������� ������� ����, ���� ������������ ������ "
                "����.\n\n������������ � ��� � ������� �������������� �����."
             << endl
             << endl;
        string path = "�����.txt";
        TEST_THEME(path);
        break;
    }
    case 8: {
        cout << "\n�� ������� ������� ����, ���� ������������ ������ "
                "����.\n\n������������ � ��� � ������� �������������� �����."
             << endl
             << endl;
        string path = "������ � �����.txt";
        TEST_THEME(path);
        break;
    }
    case 10: {
        cout << "\n�� ������� ������� ����, ���� ������������ ������ "
                "����.\n\n������������ � ��� � ������� �������������� �����."
             << endl
             << endl;
        string path = "�������.txt";
        TEST_THEME(path);
        break;
    }
    default: {
        cout << "�� ������� ������� ����� ����, ��������� ��������� ������ � "
                "���������� ��� ���"
             << endl;
        exit(1);
    }
    }
}
