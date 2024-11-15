#pragma once
#include <iostream>

using namespace std;

class Overcoat
{
private:
	char* type;
	int price;
public:
	//������������
	Overcoat() : Overcoat(nullptr, 0) {}
	explicit Overcoat(int price_p) : Overcoat(nullptr, price_p) {}//����������� �������������� �����
	Overcoat(const char* type_p, int price_p) : type{ type_p ? new char[strlen(type_p) + 1] : nullptr }, price{ price_p }
	{
		if (type)
		{
			strcpy_s(type, strlen(type_p) + 1, type_p);
		}
	}
	Overcoat(const Overcoat& coat) : type { new char [strlen(coat.type)] }, price { coat.price }//����������� �����������
	{
		strcpy_s(type, strlen(coat.type) + 1, coat.type);
	}
	//���������
	const char* get_type() const
	{
		return type;
	}
	int get_price() const
	{
		return price;
	}
	//������������
	void set_type(char* type_p)
	{
		if (type)
		{
			delete[] type;
		}

		type = new char[strlen(type_p) + 1];

		strcpy_s(type, strlen(type_p) + 1, type_p);
	}
	void set_price(int price_p)
	{
		price = price_p;
	}
	
	void print() const//����� ������
	{
		printf("%s - %d\n\n", type, price);
	}
	//���������� ����������
	friend bool operator==(const Overcoat& coat1, const Overcoat& coat2)
	{
		return coat1.type == coat2.type;
	}

	Overcoat& operator=(const Overcoat& coat)
	{
		if (this == &coat)//�������� �� �����������������
		{
			return *this;
		}

		if (type != nullptr)
		{
			delete[] type;
		}

		type = new char[strlen(coat.type) + 1];
		strcpy_s(type, strlen(coat.type) + 1, coat.type);
		price = coat.price;

		return *this;
	}

	friend bool operator>(const Overcoat& coat1, const Overcoat& coat2)
	{
		if (strcmp(coat1.type, coat2.type) == 0)//�������� �� ���������� ����
		{
			return coat1.price > coat2.price;
		}
		else
		{
			cout << "��� ������� �����������";
			return false;
		}
	}
};

