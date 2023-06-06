#include <iostream>
#include <fstream>

#include "type_urav.h"
#include "work_menu.h"

using namespace std;

//вводим данные для уравнения
void work_menu::input_koef()
{
    //выводим заголовок
    cout << "1. РЕШЕНИЕ КВАДРАТНЫХ УРАВНЕНИЙ\n\n";
    
    //обьявляем переменные окэфициентов
    double A, B, C;

    //кофециенты
    int inputs;

    //ключ правельности ввода
    int keys=0;

    //ввод A
    do
    {
        cout << "Введите коэффициент A квадратного уравнения: ";
        work_menu::input_koef_chek(inputs);
    } while (keys);
    A = inputs;

    //ввод B
    do
    {
        cout << "Введите коэффициент B квадратного уравнения: ";
        work_menu::input_koef_chek(inputs);
    } while (keys);
    B = inputs;

    //ввод C
    do
    {
        cout << "Введите коэффициент C квадратного уравнения: ";
        work_menu::input_koef_chek(inputs);
    } while (keys);
    C = inputs;

    cout << endl;

    //выбираем тип уравнения
    //первый тип 
    if (A == 0 && B == 0 && C == 0)
    {
        t_urav1 urav;
        urav.print_type();
        urav.print_korni();
    }

    //второй тип 
    else if (A == 0 && B == 0)
    {
        t_urav2 urav(C);
        urav.print_type();
        urav.print_korni();
    }

    //третий тип 
    else if (B == 0 && C == 0)
    {
        t_urav3 urav(A);
        urav.print_type();
        urav.print_korni();
    }

    //четвертый тип 
    else if (A == 0 && C == 0)
    {
        t_urav4 urav(B);
        urav.print_type();
        urav.print_korni();
    }

    //пятый тип 
    else if (A == 0)
    {
        t_urav5 urav(B, C);
        urav.print_type();
        urav.print_korni();
        urav.print_korni_per();
    }

    //шестой тип 
    else if (B == 0)
    {
        t_urav6 urav(A, C);
        urav.print_type();
        urav.print_korni();
        urav.print_korni_per();
        urav.print_korni_dis();
    }

    //седьмой тип 
    else if (C == 0)
    {
        t_urav7 urav(A, B);
        urav.print_type();
        urav.print_korni();
        urav.print_korni_per();
        urav.print_korni_dis();
    }
    else
    {
        t_urav8 urav(A, B, C);
        urav.print_type();
        urav.print_korni_per();
        urav.print_korni_dis();
    }
}


//проверка ввода меню 
int work_menu::input_chek(int& inputs)
{

    while ((!(cin >> inputs) || (cin.peek() != '\n')) || (inputs > 3 || inputs < 0))
    {
        cin.clear();
        while (cin.get() != '\n');
        cout << "Неверное значение перематра. Повторите ввод: ";
    }
    return inputs;
}



//проверка ввода коэфициентов
int work_menu::input_koef_chek(int& inputs)
{

    while ((!(cin >> inputs) || (cin.peek() != '\n')))
    {
        cin.clear();
        while (cin.get() != '\n');
        cout << "Неверное значение перематра. Повторите ввод:";
    }
    return inputs;
}

  

//вывод инофрмации о видах квадратных уравнений
void work_menu::metod_print()
{
    //открываем файл
    const char* name_file = "metod.txt";
    ifstream file(name_file);
    char temp[250];

    //выводим заголовок
    cout << "2. МЕТОДЫ РЕШЕНИЯ КВАДРАТНЫХ УРАВНЕНИЙ\n\n";

    //читаем файл
    while (file.getline(temp, 250))
    {
        //выводим файл
        cout << temp << "\n";
    }
    //закрываем файл
    file.close();
}

//вывод инофрмации о видах квадратных уравнений
void work_menu::type_print()
{
    //открываем файл
    const char* name_file = "type.txt";
    ifstream file(name_file);
    char temp[250];

    //выводим заголовок
    cout << "3. ВИДЫ КВАДРАТНЫХ УРАВНЕНИЙ\n\n";
    
    //читаем файл
    while (file.getline(temp, 250))
    {
        //выводим файл
        cout << temp << "\n";
    }
    //закрываем файл
    file.close();
}

