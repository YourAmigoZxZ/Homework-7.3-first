#include "Overcoat.h"

int main()
{
	setlocale(LC_ALL, "rus");

	Overcoat cloth1{ "coat", 11400 };
	Overcoat cloth2{ "raincoat", 2400 };
	Overcoat cloth3{ "coat", 12700 };
	int user_choice;

	cout << "� ������� 3 ������� ������� ������:\n";
	cloth1.print();
	cloth2.print();
	cloth3.print();

	if (cloth1 == cloth2)
	{
		cout << "\n\n������ ����� 1 � ������ ����� 2 ����������� ����\n\n";//�� �� ������ ����, �.�. ��� �� ���
	}
	else if (cloth1 == cloth3)
	{
		cout << "\n\n������ ����� 1 � ������ ����� 3 ����������� ����\n\n";//����������� �����
	}

	cloth2 = cloth3;
	cout << "����� ���������� ������� �������(����): ";
	cloth2.print();//��������� ������ 2, ������� ��� ����� ������� 3

	if (cloth3 > cloth1)
	{
		cout << "���� �������� ������� ����, ��� ���� �������";
	}

	return 0;
}