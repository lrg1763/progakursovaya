#pragma once

#include "type_urav.h"

class work_menu {
public:
	//�������� ����������
	static int input_chek(int& inputs);
	static int input_koef_chek(int& inputs);
	//������� �� ����� ���������
	static void type_print();
	//������� �� ������� �������
	static void metod_print();
	//������� ���������
	static void input_koef();
};