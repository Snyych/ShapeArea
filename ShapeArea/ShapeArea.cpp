#include "ShapeArea.h"
#include <cmath>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
void calcTriangle()
{
	cout << "������� ����� ������: ";
	int a, b, c;
	cin >> a >> b >> c;
	double p = (a + b + c) / 2.0;
	double area = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "������� ������������: " << area << endl;
}

void calcRectangle()
{
	cout << "������� ����� ���� ������: ";
	int a, b;
	cin >> a >> b;
	cout << "������� ��������������: " << a * b << endl;
}

void calcCircle()
{
	cout << "������� ������ ����������: ";
	int r;
	cin >> r;
	cout << "������� �����: " << 3.14159 * r * r << endl;
}