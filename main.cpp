#include <windows.h>
#include "work_menu.h"
#include <iostream>

using namespace std;

int main()
{
    //��� ������� ������
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //����������� ������ ����
    int menu_chose;

    //����������� ���� ����
    while (true) {
        cout << "������� �����, ��������������� �������:" << endl;
        cout << "1 - ������� ����������� ���������" << endl;
        cout << "2 - ������ ������� ���������� ���������" << endl;
        cout << "3 - ���� ���������� ���������" << endl;
        cout << "0 - ����� �� ���������" << endl;

        work_menu::input_chek(menu_chose);

        switch (menu_chose) {
        case 1:
            system("cls");
            work_menu::input_koef();
            system("pause");
            system("cls");
            break;
        case 2:
            system("cls");
            work_menu::metod_print();
            system("pause");
            system("cls");
            break;
        case 3:
            system("cls");
            work_menu::type_print();
            system("pause");
            system("cls");
            break;
        case 0:
            system("cls");
            system("pause");
            system("cls");
            return 0;
        }
    }
}
