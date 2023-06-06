#pragma once
#include <string>
#include <Windows.h>

using namespace std;

//первый тип
class t_urav1 {
public:
    void print_korni();
    void print_type();
};

//второй
class t_urav2 {
private:
    double C;
public:
    t_urav2(double koef_c)
    {
        C = koef_c;
    }
    void print_korni();
    void print_type();
};



//третий тип
class t_urav3 {
private:
    double A;
public:
    t_urav3(double koef_a)
    {
        A = koef_a;
    }
    void print_korni();
    void print_type();
};


//четвертый тип
class t_urav4 {
private:
    double B;
public:
    t_urav4(double koef_b)
    {
        B = koef_b;
    }
    void print_korni();
    void print_type();
};


//пятый тип
class t_urav5 {
private:
    double B, C;
public:
    t_urav5(double koef_b, double koef_c)
    {
        B = koef_b;
        C = koef_c;
    }
    void print_korni();
    void print_type();
    void print_korni_per();

};

//шестой тип
class t_urav6 {
private:
    double A, C;
public:
    t_urav6(double koef_a, double koef_c)
    {
        A = koef_a;
        C = koef_c;
    }
    void print_korni();
    void print_type();
    void print_korni_per();
    void print_korni_dis();
};

//седьмой тип
class t_urav7 {
private:
    double A, B;
public:
    t_urav7(double koef_a, double koef_b)
    {
        A = koef_a;
        B = koef_b;
    }
    void print_korni();
    void print_type();
    void print_korni_per();
    void print_korni_dis();
};

//восьмой тип
class t_urav8
{
private:
    double A, B, C;
public:
    t_urav8(double koef_a, double koef_b, double koef_c)
    {
        A = koef_a;
        B = koef_b;
        C = koef_c;
    }
    void print_type();
    void print_korni_per();
    void print_korni_dis();
};


