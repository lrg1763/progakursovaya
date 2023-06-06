#include <iostream>
#include <algorithm>
#include <Windows.h>
#include "type_urav.h"
#include <iostream>
#include <cmath>

using namespace std;

float rounds(float var)
{
    float value = (int)(var * 10000 + .5);
    return (float)value / 10000;
}

//перебор
void per(double a, double b, double c)
{
    double x1 = (double)INT16_MIN;
    double x2 = (double)INT16_MAX;
    //определ€ем€ шаг построени€
    double h = (x2 - x1) / (x2 * 20000);
    //cout << "h=" << h << endl;
    double y, y_t, t, x_t;
    int k = 0;
    int key_zh, key;
    y = a * (x1) * (x1)+b * (x1)+c;
    if (y > 0) key_zh = 0;
    else key_zh = 1;
    y_t = y;
    for (long long i = 0; i < x2 * 20000; i++)
    {

        t = x1 + i * h;
        y = a * (t) * (t)+b * (t)+c;

        if (y > 0) key = 0;
        else key = 1;

        if (key_zh != key)
        {
            if (y > 0) key_zh = 0;
            else key_zh = 1;

            k = k + 1;
            if (k == 1)
                cout << "2.  орни квадратного уравнени€(перебор): x" << k << " = " << x_t /*<< " = " << t << " " << (x_t+t)/2*/ << " ";
            else if (k > 1)
                cout << "x" << k << " = " << x_t << " ";
        }
        else
            x_t = t;
    }
    cout << endl;
}


//дискр
void dis(double a, double b, double c)
{

    double D = b * b - 4 * a * c;

    /*cout << "b * b=" << b * b << endl;
    cout << "4 * a * c=" << 4 * a * c << endl;
    cout << "D=" << D << endl;*/

    if (D < 0)
    {
        cout << "3. ”равнение не имеет корней" << endl;
    }
    else 
    {
        if (D == 0)
        {
            double x = ((-1) * b - sqrt(D)) / (2 * a);
            cout << "3.  орни квадратного уравнени€(дискриминант): " << x << endl;
        }
        else 
        {
            double x1 = ((-1) * b - sqrt(D)) / (2 * a);
            double x2 = ((-1) * b + sqrt(D)) / (2 * a);
            cout << "3.  орни квадратного уравнени€(дискриминант): ";
            cout << "x1 = " << x1 << " " << "x2 = " << x2 << endl;
        }
    }
}


//методы первого типа
void t_urav1::print_korni()
{
    cout << "1.  вадратное уравнение верно при любом x" << endl;
}
void t_urav1::print_type()
{
    cout << " вадратное уравнение имеет вид:  0 = 0" << endl;
}
  


//методы второго типа
void t_urav2::print_korni()
{
    cout << "1.  вадвратное уравнение не имеет корней" << endl;
}
void t_urav2::print_type()
{
    cout << " вадратное уравнение имеет вид: " <<  C << " = 0" << endl;
}


//методы третьего типа
void t_urav3::print_korni()
{
    cout << "1.  орень квадратного уравнени€ x = 0" << endl;
}
void t_urav3::print_type()
{
    cout << " вадратное уравнение имеет вид: " << A << "*x^2 = 0" << endl;
}

//методы четвертого типа
void t_urav4::print_korni()
{
    cout << "1.  орень квадратного уравнени€ x = 0" << endl;
}
void t_urav4::print_type()
{
    cout << " вадратное уравнение имеет вид: " << B << "*x = 0" << endl;
}


//методы п€того типа
void t_urav5::print_korni()
{
    cout << "1.  орень квадратного уравнени€: " << (-1) * (C / B) << endl;
}
void t_urav5::print_type()
{
    cout << " вадратное уравнение имеет вид:  " << B << "*x + " << C << " = 0" << endl;
}

//корни перебороб
void t_urav5::print_korni_per()
{
    per(0, B, C);
}


//методы шестого типа
void t_urav6::print_korni()
{
    double k = - C / A;
    if (k >= 0)
    {
        double x1 = sqrt(k);
        double x2 = sqrt(k) * (-1);
        cout << "1.  орни квадратного уравнени€: " << "x1 = " << x2 << " " << "x2 = " << x1 << endl;
    }
    else
    {
        cout << "1. ”равнение не имеет корней" << endl;
    }
}
void t_urav6::print_type()
{
    cout << " вадратное уравнение имеет вид:  " << A << "*x^2 + " << C << " = 0" << endl;
}
void t_urav6::print_korni_per()
{
    double k = -C / A;
    if (k >= 0)
    {
        per(A, 0, C);
    }
    else
    {
        cout << "2. ”равнение не имеет корней(перебор)" << endl;
    }

}
//корни дис
void t_urav6::print_korni_dis()
{
    double k = -C / A;
    if (k >= 0)
    {
        dis(A, 0, C);
    }
    else
    {
        cout << "3. ”равнение не имеет корней(дискриминант)" << endl;
    }

}


//методы седьмого типа
void t_urav7::print_korni()
{
    double x2 = -B / A;
    cout << "1.  орни квадратного уравнени€: " << " ";
    cout << "x1 = 0" << " " << "x2 = " << x2 << endl;
}
void t_urav7::print_type()
{
    cout << " вадратное уравнение имеет вид:  " << A << "*x^2 + " << B << "*x = 0 " << endl;
}
void t_urav7::print_korni_per()
{
    per(A, B, 0);
}
//корни дис
void t_urav7::print_korni_dis()
{
    dis(A, B, 0);
}


//методы восьмого типа
void t_urav8::print_type()
{
    cout << " вадратное уравнение имеет вид:  " << A << "*x^2 + " << B << "*x + "<< B <<" = 0 " << endl;
}

void t_urav8::print_korni_per()
{
    if (B * B - 4 * A * C < 0)
    {
        cout << "2. ”равнение не имеет корней" << endl;
    }
    else 
    {
        per(A, B, C);
    }  
}

//корни дис
void t_urav8::print_korni_dis()
{
    dis(A, B, C);
}












