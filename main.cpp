#include <windows.h>
#include "work_menu.h"
#include <iostream>

using namespace std;

int main()
{
    //для русской консли
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //перпеменная выбора меню
    int menu_chose;

    //бесконечный цикл меню
    while (true) {
        cout << "Введите цифру, соответствующую команде:" << endl;
        cout << "1 - Решение квадратного уравнения" << endl;
        cout << "2 - Методы решения квадратных уравнений" << endl;
        cout << "3 - Виды квадратных уравнений" << endl;
        cout << "0 - Выйти из программы" << endl;

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
