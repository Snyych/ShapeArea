#include <iostream>
#include "ShapeArea.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
    int shapeNum;
    cout << "Выберите фигуру (1 - треугольник, 2 - прямоугольник, 3 - окружность): ";
    cin >> shapeNum;

	switch (shapeNum)
	{
		case 1: calcTriangle(); break;
		case 2: calcRectangle(); break;
		case 3: calcCircle(); break;
		default: cout << "Неверный номер фигуры!";
	}
}