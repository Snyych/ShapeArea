#include "ShapeArea.h"
#include <cmath>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
void calcTriangle()
{
	cout << "Введите длины сторон: ";
	int a, b, c;
	cin >> a >> b >> c;
	double p = (a + b + c) / 2.0;
	double area = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "Площадь треугольника: " << area << endl;
}

void calcRectangle()
{
	cout << "Введите длины двух сторон: ";
	int a, b;
	cin >> a >> b;
	cout << "Площадь прямоугольника: " << a * b << endl;
}

void calcCircle()
{
	cout << "Введите радиус окружности: ";
	int r;
	cin >> r;
	cout << "Площадь круга: " << 3.14159 * r * r << endl;
}