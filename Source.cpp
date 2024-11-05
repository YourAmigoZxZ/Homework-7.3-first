#include "Overcoat.h"

int main()
{
	setlocale(LC_ALL, "rus");

	Overcoat cloth1{ "coat", 11400 };
	Overcoat cloth2{ "raincoat", 2400 };
	Overcoat cloth3{ "coat", 12700 };
	int user_choice;

	cout << "В наличии 3 объекта верхней одежды:\n";
	cloth1.print();
	cloth2.print();
	cloth3.print();

	if (cloth1 == cloth2)
	{
		cout << "\n\nОдежда номер 1 и одежда номер 2 одинакового типа\n\n";//мы не попадём сюда, т.к. это не так
	}
	else if (cloth1 == cloth3)
	{
		cout << "\n\nОдежда номер 1 и одежда номер 3 одинакового типа\n\n";//Утверждение верно
	}

	cloth2 = cloth3;
	cout << "Вывод изменённого второго объекта(плащ): ";
	cloth2.print();//выводится обьект 2, который уже равен объекту 3

	if (cloth3 > cloth1)
	{
		cout << "Цена третьего объекта выше, чем цена первого";
	}

	return 0;
}