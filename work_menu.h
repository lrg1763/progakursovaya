#pragma once

#include "type_urav.h"

class work_menu {
public:
	//проверка параметров
	static int input_chek(int& inputs);
	static int input_koef_chek(int& inputs);
	//справка по видам уравнений
	static void type_print();
	//справка по методам решений
	static void metod_print();
	//решение уравнений
	static void input_koef();
};