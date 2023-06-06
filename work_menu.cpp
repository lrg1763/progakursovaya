#include <iostream>
#include <fstream>

#include "type_urav.h"
#include "work_menu.h"

using namespace std;

//������ ������ ��� ���������
void work_menu::input_koef()
{
    //������� ���������
    cout << "1. ������� ���������� ���������\n\n";
    
    //��������� ���������� ������������
    double A, B, C;

    //����������
    int inputs;

    //���� ������������ �����
    int keys=0;

    //���� A
    do
    {
        cout << "������� ����������� A ����������� ���������: ";
        work_menu::input_koef_chek(inputs);
    } while (keys);
    A = inputs;

    //���� B
    do
    {
        cout << "������� ����������� B ����������� ���������: ";
        work_menu::input_koef_chek(inputs);
    } while (keys);
    B = inputs;

    //���� C
    do
    {
        cout << "������� ����������� C ����������� ���������: ";
        work_menu::input_koef_chek(inputs);
    } while (keys);
    C = inputs;

    cout << endl;

    //�������� ��� ���������
    //������ ��� 
    if (A == 0 && B == 0 && C == 0)
    {
        t_urav1 urav;
        urav.print_type();
        urav.print_korni();
    }

    //������ ��� 
    else if (A == 0 && B == 0)
    {
        t_urav2 urav(C);
        urav.print_type();
        urav.print_korni();
    }

    //������ ��� 
    else if (B == 0 && C == 0)
    {
        t_urav3 urav(A);
        urav.print_type();
        urav.print_korni();
    }

    //��������� ��� 
    else if (A == 0 && C == 0)
    {
        t_urav4 urav(B);
        urav.print_type();
        urav.print_korni();
    }

    //����� ��� 
    else if (A == 0)
    {
        t_urav5 urav(B, C);
        urav.print_type();
        urav.print_korni();
        urav.print_korni_per();
    }

    //������ ��� 
    else if (B == 0)
    {
        t_urav6 urav(A, C);
        urav.print_type();
        urav.print_korni();
        urav.print_korni_per();
        urav.print_korni_dis();
    }

    //������� ��� 
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


//�������� ����� ���� 
int work_menu::input_chek(int& inputs)
{

    while ((!(cin >> inputs) || (cin.peek() != '\n')) || (inputs > 3 || inputs < 0))
    {
        cin.clear();
        while (cin.get() != '\n');
        cout << "�������� �������� ���������. ��������� ����: ";
    }
    return inputs;
}



//�������� ����� ������������
int work_menu::input_koef_chek(int& inputs)
{

    while ((!(cin >> inputs) || (cin.peek() != '\n')))
    {
        cin.clear();
        while (cin.get() != '\n');
        cout << "�������� �������� ���������. ��������� ����:";
    }
    return inputs;
}

  

//����� ���������� � ����� ���������� ���������
void work_menu::metod_print()
{
    //��������� ����
    const char* name_file = "metod.txt";
    ifstream file(name_file);
    char temp[250];

    //������� ���������
    cout << "2. ������ ������� ���������� ���������\n\n";

    //������ ����
    while (file.getline(temp, 250))
    {
        //������� ����
        cout << temp << "\n";
    }
    //��������� ����
    file.close();
}

//����� ���������� � ����� ���������� ���������
void work_menu::type_print()
{
    //��������� ����
    const char* name_file = "type.txt";
    ifstream file(name_file);
    char temp[250];

    //������� ���������
    cout << "3. ���� ���������� ���������\n\n";
    
    //������ ����
    while (file.getline(temp, 250))
    {
        //������� ����
        cout << temp << "\n";
    }
    //��������� ����
    file.close();
}

