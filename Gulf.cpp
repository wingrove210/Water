#include "Gulf.h"
#include <Windows.h>

void Zaliv::setName(string N)
{
	name = N;
}
void Zaliv::setDeep(float D)
{
	deep = D;
}
void Zaliv::setSize(float S)
{
	size = S;
}

ostream& operator<<(ostream& out, Zaliv obj)
{
	out << obj.name << " �����; ";
	out << "�������: " << obj.deep << "�; ";
	out << "������: " << obj.size << "��� ��2";

	return out;
}
istream& operator>>(istream& stream, Zaliv& obj)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Rus");
	stream >> obj.name >> obj.deep >> obj.size;
	return stream;
}