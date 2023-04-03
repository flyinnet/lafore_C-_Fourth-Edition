#include <iostream>

using namespace std;

struct point
{
	int axis_x;			//координата по оси X
	int axis_y;			//координата по оси y
};

int main()
{
	point point1, point2, point3;
	cout << "Введите координаты первой точки. (Пример 10 20): ";
	cin >> point1.axis_x >> point1.axis_y;
	cout << "Введите координаты второй точки. (Пример 10 20): ";
	cin >> point2.axis_x >> point2.axis_y;	
	point3 = {point1.axis_x + point2.axis_x, point1.axis_y + point2.axis_y};
	cout << "Координаты точки point1 + point2 = " << point3.axis_x << ", " << point3.axis_y << endl;
	return 0;
}
